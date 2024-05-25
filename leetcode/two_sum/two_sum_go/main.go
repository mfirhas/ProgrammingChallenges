// https://leetcode.com/problems/two-sum/

package main

import (
	"fmt"
	"sort"
)

func main() {
	asd := []int{2, 7, 11, 15}
	target := 9
	fmt.Println(twoSumTwoPointers(asd, target))
}

// On^2 solution: brute force
func twoSum(nums []int, target int) []int {
	for i := 0; i < len(nums)-1; i++ {
		for j := i + 1; j < len(nums); j++ {
			sum := nums[i] + nums[j]
			if sum == target {
				return []int{i, j}
			}
		}
	}
	return nil
}

// On solution: complement
func twoSumComplement(nums []int, target int) []int {
	complement := make(map[int]int)

	for i, num := range nums {
		if j, ok := complement[num]; ok {
			return []int{i, j}
		}
		complement[target-num] = i
	}
	return nil
}

// two pointer solution
func twoSumTwoPointers(nums []int, target int) []int {
	if len(nums) < 2 {
		panic("constraint violated")
	}

	sorted_nums := indexAndSort(nums)

	i := 0
	j := len(sorted_nums) - 1
	for i < j {
		sum := sorted_nums[i][1] + sorted_nums[j][1]
		if sum == target {
			left_index := sorted_nums[i][0]
			right_index := sorted_nums[j][0]
			return []int{left_index, right_index}
		} else if sum < target {
			i += 1
		} else {
			j -= 1
		}
	}

	return nil
}

type SortBy [][]int

func (a SortBy) Len() int           { return len(a) }
func (a SortBy) Swap(i, j int)      { a[i], a[j] = a[j], a[i] }
func (a SortBy) Less(i, j int) bool { return a[i][1] < a[j][1] }

func indexAndSort(nums []int) [][]int {
	indexedArr := [][]int{}
	for i := 0; i < len(nums); i++ {
		indexedArr = append(indexedArr, []int{i, nums[i]})
	}
	sort.Sort(SortBy(indexedArr))

	return indexedArr
}
