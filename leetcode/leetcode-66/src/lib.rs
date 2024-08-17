pub fn plus_one(digits: Vec<i32>) -> Vec<i32> {
    let last_index = digits.len() - 1;
    let mut ret = vec![0];

    let sum = digits[last_index] + 1;

    if sum < 10 {
        ret.clone_from(&digits);
        ret[last_index] = sum;
        return ret;
    } else {
        ret.extend(&digits);
        for i in (0..ret.len()).rev() {
            let sum = ret[i] + 1;
            if sum < 10 {
                ret[i] = sum;
                if ret[0] == 0 {
                    ret.remove(0);
                }
                return ret;
            }
            ret[i] = 0;
        }
    }

    if ret[0] == 0 {
        ret.remove(0);
    }
    ret
}

#[cfg(test)]
mod tests {
    use crate::plus_one;

    #[test]
    fn test_plus_one() {
        let digits = vec![1, 2, 3];
        let expected = vec![1, 2, 4];
        let ret = plus_one(digits);

        dbg!(&ret);

        assert_eq!(ret, expected);

        let digits = vec![4, 3, 2, 1];
        let expected = vec![4, 3, 2, 2];
        let ret = plus_one(digits);

        dbg!(&ret);

        assert_eq!(ret, expected);

        let digits = vec![9];
        let expected = vec![1, 0];
        let ret = plus_one(digits);

        dbg!(&ret);

        assert_eq!(ret, expected);

        let digits = vec![8, 9, 9, 9];
        let expected = vec![9, 0, 0, 0];
        let ret = plus_one(digits);

        dbg!(&ret);

        assert_eq!(ret, expected);
    }
}
