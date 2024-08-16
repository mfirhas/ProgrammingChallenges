pub fn remove_element(nums: &mut Vec<i32>, val: i32) -> i32 {
    let mut new_nums = vec![];
    for i in 0..nums.len() {
        if nums[i] != val {
            new_nums.push(nums[i]);
        }
    }
    *nums = new_nums;
    nums.len() as i32
}

/// val = 4
/// 1 2 2 3 4 3
/// -> 1 2 2 3 3 4
/// Invariants:
/// - If all items in array equal to val, return 0, and empty array
/// - If
pub fn remove_element_in_place(nums: &mut Vec<i32>, val: i32) -> i32 {
    if nums.is_empty() || nums.len() > 100 {
        return 0;
    }

    if nums.len() == 1 && nums[0] == val {
        *nums = vec![];
        return 0;
    }

    if nums.len() == 1 && nums[0] != val {
        return 1;
    }

    let mut i = 0;
    let mut curr_detected_pos = 0;
    let mut need_to_swap = false;
    let mut num_of_detected = 0;
    while i < nums.len() {
        if nums[i] == val && !need_to_swap {
            curr_detected_pos = i;
            need_to_swap = true;
            num_of_detected += 1;
        }

        if nums[i] != val && need_to_swap {
            let temp = nums[i];
            nums[i] = nums[curr_detected_pos];
            nums[curr_detected_pos] = temp;
            need_to_swap = false;
            i = curr_detected_pos + 1;
            continue;
        }

        i += 1;
    }

    ((nums.len() - num_of_detected) + 1_usize) as i32
}

pub fn remove_element_two_pointer(nums: &mut Vec<i32>, val: i32) -> i32 {
    let mut count = 0;
    for i in 0..nums.len() {
        if nums[i] != val {
            nums[count] = nums[i];
            count += 1;
        }
    }
    count as i32
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn test_remove_element() {
        let mut nums = vec![0, 1, 2, 2, 3, 0, 4, 2];
        // let mut nums = vec![3, 2, 2, 3];
        // let mut nums = vec![2, 2, 2, 2];
        let val = 2;
        // let ret = remove_element(&mut nums, val);
        let ret = remove_element_two_pointer(&mut nums, val);
        // let ret = remove_element_2(&mut nums, val);
        let expected = 2;
        if ret != expected {
            panic!("expected {}, got {}", &expected, &ret);
        }
        if nums[0] != 2 || nums[1] != 2 {
            panic!("expected first two of array is 2, got {:?}", &nums);
        }
    }
}
