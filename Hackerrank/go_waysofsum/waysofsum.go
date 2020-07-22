package main

import "fmt"

// total = 8
// k = 2

// 0 0 0 0 0 0 0 0
// 1 1 1 1 1 1 1 1

// 2 1 1 1 1 1 1
// 2 2 1 1 1 1
// 2 2 2 1 1
// 2 2 2 2
func WaysOfSum(total int, k int) int {
	if k == 1 {
		return 1
	}
	a := make([]int, total)
	currLen := total
	var A [][]int
	x := 1
	i := 0
	for x < k {
		x++
		a[i] = x
		currLen--
		A = append(A, a[:currLen])
		if x == k {
			x = 1
			i++
		}
		if currLen-1 == i || currLen == i {
			break
		}
	}

	return len(A)
}

func main() {
	fmt.Println(WaysOfSum(8, 2)) // should print 4
	fmt.Println(WaysOfSum(6, 3)) // should print 4
	fmt.Println(WaysOfSum(3, 2)) // should print 1
	fmt.Println(WaysOfSum(5, 3)) // should print 3
	fmt.Println(WaysOfSum(7, 2)) // should print 3
	fmt.Println(WaysOfSum(7, 3)) // should print 4
}
