use std::collections::HashSet;

pub fn remove_duplicates(nums: &mut Vec<i32>) -> i32 {
    *nums = nums
        .into_iter()
        .map(|v| v.to_owned())
        .collect::<HashSet<_>>()
        .into_iter()
        .collect::<Vec<_>>();
    nums.sort();
    nums.len() as i32
}

pub fn remove_duplicates_improved(nums: &mut Vec<i32>) -> i32 {
    let mut count = 1;

    for i in 1..nums.len() {
        if nums[i] != nums[i - 1] {
            nums[count] = nums[i];
            count = count + 1;
        }
    }
    nums.truncate(count);
    count as i32
}

pub fn remove_duplicates_improved_more(nums: &mut Vec<i32>) -> i32 {
    if nums.is_empty() || nums.len() > 30000 {
        return 0;
    }

    let mut new_nums: Vec<i32> = vec![];
    new_nums.push(nums[0]);

    for i in 1..nums.len() {
        if nums[i] != nums[i - 1] {
            new_nums.push(nums[i]);
        }
    }
    *nums = new_nums;
    nums.len() as i32
}

#[cfg(test)]
mod tests {

    use super::*;

    #[test]
    fn test_remove_duplicates() {
        let mut nums = vec![0, 0, 1, 1, 1, 2, 2, 3, 3, 4]; //vec![1, 1, 2];
        let output = remove_duplicates_improved_more(&mut nums);
        let expected = 5;
        dbg!(&nums, &output);
        assert_eq!(output, expected);
    }
}
