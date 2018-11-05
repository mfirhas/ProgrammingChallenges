package main

import (
	"fmt"
)

func modulo(n int, c map[int]bool) int {
	m := n % 42
	if _, found := c[m]; !found {
		c[m] = true
		return 1
	}
	return 0
}

func main() {
	c := make(map[int]bool, 10)
	var n int
	t := 0
	for i := 0; i < 10; i++ {
		fmt.Scanln(&n)
		t += modulo(n, c)
	}
	if t == 0 {
		fmt.Println(1)
	} else {
		fmt.Println(t)
	}
}
