package main

import "fmt"

func main() {
	fmt.Println(rotLeft([]int32{1, 2, 3, 4, 5}, 4))
}

func rotLeft(a []int32, d int32) []int32 {
	for i := int32(0); i < d; i++ {
		a = append(a, a[0])
		a = a[1:]
	}
	return a
}
