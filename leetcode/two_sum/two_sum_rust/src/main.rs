// https://leetcode.com/problems/two-sum/

fn main() {
    let input = vec![2, 7, 11, 15];
    let target = 9;
    println!("{:?}", two_sum(input, target));

    let input = vec![3, 2, 4];
    let target = 6;
    println!("{:?}", two_sum(input, target));
}

// two pointer techniques
// place 2 pointer i and j,
// i starts from left
// j starts from right
// sum both of them,
// if summation produces less or equal than target, move i to the right.
// if summation produces more than target, move j to the left.
pub fn two_sum(nums: Vec<i32>, target: i32) -> Vec<i32> {
    if nums.len() < 2 {
        panic!("constraint violated")
    }

    let sorted_nums = index_and_sort(nums);

    let mut i = 0 as usize;
    let mut j = sorted_nums.len() - 1;
    while i < j {
        let sum = sorted_nums[i][1] + sorted_nums[j][1];
        if sum == target {
            let left_index = sorted_nums[i][0];
            let right_index = sorted_nums[j][0];
            return [left_index, right_index].into();
        } else if sum < target {
            i += 1;
        } else {
            j -= 1;
        }
    }

    Vec::new()
}

fn index_and_sort(arr: Vec<i32>) -> Vec<Vec<i32>> {
    let mut indexed_vec: Vec<(usize, i32)> = arr.into_iter().enumerate().collect();
    indexed_vec.sort_by_key(|&(_, value)| value);
    let sorted_2d_array: Vec<Vec<i32>> = indexed_vec
        .into_iter()
        .map(|(index, value)| vec![index as i32, value])
        .collect();
    sorted_2d_array
}

// brute force loop inside loop
pub fn two_sum_brute_force(nums: Vec<i32>, target: i32) -> Vec<i32> {
    for (i, v) in nums.iter().enumerate() {
        for j in i + 1..nums.len() {
            let sum = nums[i] + nums[j];
            if sum == target {
                return vec![i as i32, j as i32];
            }
        }
    }

    Vec::new()
}

// complement
pub fn two_sum_complement(nums: Vec<i32>, target: i32) -> Vec<i32> {
    let mut complement: std::collections::HashMap<i32, usize> = std::collections::HashMap::new();

    for (i, &num) in nums.iter().enumerate() {
        if let Some(&j) = complement.get(&num) {
            return vec![i as i32, j as i32];
        }
        complement.insert(target - num, i);
    }
    Vec::new()
}
