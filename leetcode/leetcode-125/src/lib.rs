fn is_palindrome(s: String) -> bool {
    if s.is_empty() {
        return true;
    }

    let input = remove_alphanumeric(&s);
    if input.is_empty() {
        return true;
    }

    let pivot = (0 + (input.len() - 1)) / 2;

    for i in 0..=pivot {
        let left = i;
        let right = (input.len() - 1) - left;
        if input[left] != input[right] {
            return false;
        }
    }

    return true;
}

fn remove_alphanumeric(s: &str) -> Vec<char> {
    s.to_lowercase()
        .chars()
        .filter(|c| c.is_alphanumeric()) // Keep only alphanumeric characters
        .collect()
}

#[cfg(test)]
mod tests {
    use super::is_palindrome;

    #[test]
    fn test_is_palindrom() {
        let s = "A man, a plan, a canal: Panama".to_string();
        let ret = is_palindrome(s);
        let expected = true;

        assert_eq!(ret, expected);

        let s = "race a car".to_string();
        let ret = is_palindrome(s);
        let expected = false;

        assert_eq!(ret, expected);

        let s = " ".to_string();
        let ret = is_palindrome(s);
        let expected = true;

        assert_eq!(ret, expected);
    }
}
