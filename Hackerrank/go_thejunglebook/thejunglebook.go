package main

import "fmt"

func minimumGroups(predators []int) int {
	var totalGroup int = 1
	num := len(predators)
	for i := 0; i < num; i++ {
		species := i
		tempGroup := 1
		for predators[species] > -1 && predators[species] < num && tempGroup < num {
			species = predators[species]
			tempGroup++
		}

		if tempGroup > totalGroup {
			totalGroup = tempGroup
		}
	}

	return totalGroup
}

func main() {
	var predators []int = []int{-1, 8, 6, 0, 7, 3, 8, 9, -1, 6, 1}
	fmt.Println(minimumGroups(predators))
}
