fn diagonal_sort_impl(mat: Vec<Vec<i32>>) -> Vec<Vec<i32>> {
    let rows_len = mat.len();
    let cols_len = mat[0].len();
    let mut arr = vec![vec![0; cols_len]; rows_len];

    for i in 0..cols_len {
        let mut list = vec![];
        let (mut ind, mut ind1) = (0, i);
        while ind < rows_len && ind1 < cols_len {
            list.push(mat[ind][ind1]);
            ind += 1;
            ind1 += 1;
        }
        list.sort_unstable();
        let (mut ind, mut ind1) = (0, i);
        for &val in &list {
            if ind < rows_len && ind1 < cols_len {
                arr[ind][ind1] = val;
                ind += 1;
                ind1 += 1;
            }
        }
    }

    for i in 0..rows_len {
        let mut list = vec![];
        let (mut ind1, mut ind) = (i, 0);
        while ind1 < rows_len && ind < cols_len {
            list.push(mat[ind1][ind]);
            ind1 += 1;
            ind += 1;
        }
        list.sort_unstable();
        let (mut ind1, mut ind) = (i, 0);
        for &val in &list {
            if ind1 < rows_len && ind < cols_len {
                arr[ind1][ind] = val;
                ind1 += 1;
                ind += 1;
            }
        }
    }

    arr
}

#[cfg(test)]
mod diagonal_sort_test {
    use super::*;
    #[test]
    fn test_diagonal_sort() {
        let mat = vec![vec![3, 3, 1, 1], vec![2, 2, 1, 2], vec![1, 1, 1, 2]];
        let ret = diagonal_sort_impl(mat);
        println!("{:?}", &ret);
    }
}
