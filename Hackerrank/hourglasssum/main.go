package main

import "sort"

func main() {

}

/*
	hourglass
	1 2 3 0 3 0
    0 2 4 2 4 2
	2 2 0 0 0 0
	4 2 1 0 1 0
	1 2 3 0 3 0
	0 2 4 2 4 2

	hourglass sample:
	row:column
	top: arr[0:0] arr[0:1] arr[0:2]  mid: arr[1:1]  bottom: arr[2:0] arr[2:1] arr[2:2]
	top: arr[0:1] arr[0:2] arr[0:3]  mid: arr[1:2]  bottom: arr[2:1] arr[2:2] arr[2:3]
	...
	top: arr[3:0] arr[3:1] arr[3:2]  mid: arr[4:1]  bottom: arr[5:0] arr[5:1] arr[5:2]
	...
	top: arr[3:3] arr[3:4] arr[3:5]  mid: arr[4:4]  bottom: arr[5:3] arr[5:4] arr[5:5]

	top: x-> n
		 y-> n , n+1, n+2
	mid: x-> (top.x)+1, (top.y)+1
	bottom: x-> (top.x)+2
			y-> top.y
*/
func hourglassSum(arr [][]int32) int32 {
	// Write your code here
	sums := []int32{}
	for rw := 0; rw < len(arr)-2; rw++ {
		for cl := 0; cl < len(arr)-2; cl++ {
			sum := arr[rw][cl] + arr[rw][cl+1] + arr[rw][cl+2] + // top
				arr[rw+1][cl+1] + // mid
				arr[rw+2][cl] + arr[rw+2][cl+1] + arr[rw+2][cl+2] // bottom
			sums = append(sums, sum)
		}
	}
	sort.Sort(SortDesc(sums))
	return sums[0]
}

type SortDesc []int32

func (a SortDesc) Len() int           { return len(a) }
func (a SortDesc) Swap(i, j int)      { a[i], a[j] = a[j], a[i] }
func (a SortDesc) Less(i, j int) bool { return a[i] > a[j] }
