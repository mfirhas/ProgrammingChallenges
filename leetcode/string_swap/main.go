package main

import "fmt"

/*
Given two strings s and goal, return true if you can swap two letters in s so the result is equal to goal, otherwise, return false.

Swapping letters is defined as taking two indices i and j (0-indexed) such that i != j and swapping the characters at s[i] and s[j].

For example, swapping at indices 0 and 2 in "abcd" results in "cbad".


Example 1:

Input: s = "ab", goal = "ba"
Output: true
Explanation: You can swap s[0] = 'a' and s[1] = 'b' to get "ba", which is equal to goal.
Example 2:

Input: s = "ab", goal = "ab"
Output: false
Explanation: The only letters you can swap are s[0] = 'a' and s[1] = 'b', which results in "ba" != goal.
Example 3:

Input: s = "aa", goal = "aa"
Output: true
Explanation: You can swap s[0] = 'a' and s[1] = 'a' to get "aa", which is equal to goal.


Constraints:

1 <= s.length, goal.length <= 2 * 104
s and goal consist of lowercase letters.
*/

func main() {
	s, goal := "ab", "ba"
	fmt.Println(buddyStrings(s, goal))
}

func buddyStrings(s string, goal string) bool {
	if len(s) == 1 {
		return false
	}
	rs := []rune(s)
	for i := 0; i < len(s)-1; i++ {
		for j := i + 1; j < len(s); j++ {
			rs[i], rs[j] = rs[j], rs[i]
			if string(rs) == goal {
				return true
			}
			rs[i], rs[j] = rs[j], rs[i]
		}
	}
	return false
}
