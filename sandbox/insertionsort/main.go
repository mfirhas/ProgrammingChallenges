package main

import "fmt"

func main() {
	arr := []int{4, 2, 3, 5, 4, 4}
	InsertionSort(arr)
	fmt.Println(arr)
}

func InsertionSort(arr []int) {
	for i := 1; i < len(arr); i++ {
		for j := 0; j < i+1; j++ {
			if arr[i] < arr[j] {
				arr[i], arr[j] = arr[j], arr[i]
			}
		}
	}
}
