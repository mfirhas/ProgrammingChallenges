pub fn search_insert(nums: Vec<i32>, target: i32) -> i32 {
    let begin = 0_usize;
    let end = nums.len() - 1;
    search(nums, target, begin, end) as i32
}

// 1 3 5 6
// target = 7
// expected = 4
fn search(nums: Vec<i32>, target: i32, begin: usize, end: usize) -> usize {
    if end - begin == 0 || end - begin == 1 {
        if target <= nums[begin] {
            return begin;
        } else if target <= nums[end] {
            return begin + 1;
        } else {
            return end + 1;
        }
    }

    let pivot = (begin + end) / 2;
    let mut new_begin = begin;
    let mut new_end = end;
    if target <= nums[pivot] {
        new_end = pivot;
    } else {
        new_begin = pivot;
    }
    search(nums, target, new_begin, new_end)
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn test_search_insert() {
        let nums = vec![1, 3, 5, 6];
        let target = 7;
        let expected = 4;
        let ret = search_insert(nums, target);

        assert_eq!(ret, expected);
    }
}
