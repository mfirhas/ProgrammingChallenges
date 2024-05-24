package main

import "fmt"

func main() {
	arr := []int{4, 2, 3, 5, 4, 4}
	BubbleSort(arr)
	fmt.Println(arr)
}

func BubbleSort(arr []int) {
	for i := 0; i < len(arr)-1; i++ {
		for j := i + 1; j < len(arr); j++ {
			if arr[i] > arr[j] {
				arr[i], arr[j] = arr[j], arr[i]
			}
		}
	}
}
