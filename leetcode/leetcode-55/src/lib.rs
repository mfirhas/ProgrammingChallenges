/**
https://leetcode.com/problems/jump-game/description/

You are given an integer array nums. You are initially positioned at the array's first index, and each element in the array represents your maximum jump length at that position.

Return true if you can reach the last index, or false otherwise.



Example 1:

Input: nums = [2,3,1,1,4]
Output: true
Explanation: Jump 1 step from index 0 to 1, then 3 steps to the last index.
Example 2:

Input: nums = [3,2,1,0,4]
Output: false
Explanation: You will always arrive at index 3 no matter what. Its maximum jump length is 0, which makes it impossible to reach the last index.


Constraints:

1 <= nums.length <= 104
0 <= nums[i] <= 105

*/

fn meet_constraint(n: i32) -> bool {
    if n < 0 || n > 100000 {
        return false;
    }
    true
}

pub fn can_jump(nums: Vec<i32>) -> bool {
    if nums.len() == 1 {
        return true;
    }
    if nums.len() < 1 || nums.len() > 10000 {
        return false;
    }

    let last_index = nums.len() - 1;

    // number of jumps needed from current index to last element
    let mut jump_len = 0;

    // is previous iteration(next to current index), able to jump to next
    let mut can_jump_to_next = false;

    // number of items can jump to next, if all can jump to next, then its value equals to nums.len() - 1
    let mut jump_next_count = 0;

    // is previous iteration(next to current index), able to jump to next
    let mut can_jump_to_last = false;

    // let mut is_one_can_jump_to_last = false;

    let mut recent_cannot_jump_next_index = 0;

    // [3, 0, 8, 2, 0, 0, 1];
    // [1, 0, 1, 0]
    // [2, 5, 0, 0]
    for i in (0..last_index).rev() {
        jump_len += 1;

        if nums[i] >= 1 {
            can_jump_to_next = true;
            jump_next_count += 1;
        } else {
            can_jump_to_next = false;
            recent_cannot_jump_next_index = i;
            // continue;
        }

        if nums[i] >= jump_len {
            // is_one_can_jump_to_last = true;
            can_jump_to_last = true;
        } else {
            can_jump_to_last = false;
            if can_jump_to_next && nums[i + 1] >= jump_len {
                can_jump_to_last = true;
            }
        }

        println!("{i}:{} can_jump_to_next: {}", nums[i], can_jump_to_next);
        println!("{i}:{} can_jump_to_last: {}", nums[i], can_jump_to_last);
    }

    println!("jump_next_count: {}", jump_next_count);

    if jump_next_count == (nums.len() - 1) {
        return true;
    }

    if can_jump_to_last {
        return true;
    }

    false
}

pub fn can_jump_2(nums: Vec<i32>) -> bool {
    if nums.len() == 1 {
        return true;
    }
    if nums.len() < 1 || nums.len() > 10000 {
        return false;
    }

    let mut max_jump = 0;

    for (i, &jump) in nums.iter().enumerate() {
        if i > max_jump {
            return false;
        }

        max_jump = max_jump.max(i + jump as usize);

        if max_jump >= nums.len() - 1 {
            return true;
        }
    }

    true
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn it_works() {
        let arr = [2, 3, 1, 1, 4];
        // let ret = can_jump(arr.into());
        let ret = can_jump_2(arr.into());
        println!("return: {ret}");
        assert_eq!(ret, true);

        let arr = [3, 2, 1, 0, 4];
        // let ret = can_jump(arr.into());
        let ret = can_jump_2(arr.into());
        println!("return: {ret}");
        assert_eq!(ret, false);

        let arr = [2, 5, 0, 0];
        // let ret = can_jump(arr.into());
        let ret = can_jump_2(arr.into());
        println!("return: {ret}");
        assert_eq!(ret, true);

        let arr = [3, 0, 8, 2, 0, 0, 1];
        // let ret = can_jump(arr.into());
        let ret = can_jump_2(arr.into());
        println!("return: {ret}");
        assert_eq!(ret, true);

        let arr = [1, 0, 1, 0];
        // let ret = can_jump(arr.into());
        let ret = can_jump_2(arr.into());
        println!("return: {ret}");
        assert_eq!(ret, false);

        // [1, 0,  1, 0]
        // last item found that can jump
        // last_can_jump_over_zero_or_last_index
        // last_cannot_jump_next_index
        let arr = [2, 0, 1, 0, 2, 0, 5, 0, 4];
        // let ret = can_jump(arr.into());
        let ret = can_jump(arr.into());
        // let ret = can_jump_2(arr.into());
        println!("return: {ret}");
        assert_eq!(ret, false);
    }
}
