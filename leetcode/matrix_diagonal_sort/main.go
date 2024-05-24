package main

import (
	"fmt"
	"sort"
)

/*
A matrix diagonal is a diagonal line of cells starting from some cell in either the topmost row or leftmost column and going in the bottom-right direction until reaching the matrix's end. For example, the matrix diagonal starting from mat[2][0], where mat is a 6 x 3 matrix, includes cells mat[2][0], mat[3][1], and mat[4][2].

Given an m x n matrix mat of integers, sort each matrix diagonal in ascending order and return the resulting matrix.

m = rows
n = columns
sort from top left to bottom right

Example 1:


Input: mat = [[3,3,1,1],[2,2,1,2],[1,1,1,2]]
Output: [[1,1,1,1],[1,2,2,2],[1,2,3,3]]
Example 2:

Input: mat = [[11,25,66,1,69,7],[23,55,17,45,15,52],[75,31,36,44,58,8],[22,27,33,25,68,4],[84,28,14,11,5,50]]
Output: [[5,17,4,1,52,7],[11,11,25,45,8,69],[14,23,25,44,58,15],[22,27,31,36,50,66],[84,28,75,33,55,68]]


Constraints:

m == mat.length
n == mat[i].length
1 <= m, n <= 100
1 <= mat[i][j] <= 100
*/

/*
{3, 3, 1, 1}
{2, 2, 1, 2}
{1, 1, 1, 2}

// columns
// mat[0][3]

// mat[0][2]
// mat[1][3]

// mat[0][1]
// mat[1][2]
// mat[2][3]

// rows
// mat[0][0]
// mat[1][1]
// mat[2][2]

// mat[1][0]
// mat[2][1]

// mat[2][0]
*/

/*
{3, 3, 1, 1}
{2, 2, 1, 2}
{1, 1, 1, 2}
{2, 3, 3, 4}

// columns
// mat[0][3]

// mat[0][2]
// mat[1][3]

// mat[0][1]
// mat[1][2]
// mat[2][3]

// rows
// mat[0][0]
// mat[1][1]
// mat[2][2]
// mat[3][3]

// mat[1][0]
// mat[2][1]
// mat[3][2]

// mat[2][0]
// mat[3][1]

// mat[3][0]
*/

/*

{3, 3, 1, 1, 2}
{2, 2, 1, 2, 1}
{1, 1, 1, 2, 1}

// columns


// rows

*/

func main() {
	dd := [][]int{
		{3, 3, 1, 1},
		{2, 2, 1, 2},
		{1, 1, 1, 2},
	}
	fmt.Println("result:  ", diagonalSort(dd))
	fmt.Println("expected: [[1,1,1,1],[1,2,2,2],[1,2,3,3]]")

	fmt.Println("---")
	dd = [][]int{
		{3, 3, 1, 1},
		{2, 2, 1, 2},
		{1, 1, 1, 2},
		{2, 3, 3, 4},
	}
	fmt.Println(diagonalSort(dd))

	fmt.Println("---")
	dd = [][]int{
		{11, 25, 66, 1, 69, 7},
		{23, 55, 17, 45, 15, 52},
		{75, 31, 36, 44, 58, 8},
		{22, 27, 33, 25, 68, 4},
		{84, 28, 14, 11, 5, 50},
	}
	fmt.Println("result:  ", diagonalSort(dd))
	fmt.Println("expected: [[5,17,4,1,52,7],[11,11,25,45,8,69],[14,23,25,44,58,15],[22,27,31,36,50,66],[84,28,75,33,55,68]]")
}

func diagonalSort(mat [][]int) [][]int {
	rows, columns := convertToSliceOfSlice(mat)
	sortedRows, sortedColumns := sortSlices(rows, columns)
	convertToSortedMatrix(mat, sortedRows, sortedColumns)
	return mat
}

func convertToSliceOfSlice(mat [][]int) ([][]int, [][]int) { // rows, columns
	diagonalLinesRows := [][]int{}
	diagonalLinesColumns := [][]int{}

	numOfRowLines := len(mat)
	numOfColumnLines := len(mat[0]) - 1

	// rows traversal
	ci := 0
	for r := 0; r < numOfRowLines; r++ {
		line := []int{}
		for ri := r; ri < len(mat); ri++ {
			line = append(line, mat[ri][ci])
			ci++
		}
		ci = 0
		diagonalLinesRows = append(diagonalLinesRows, line)
	}
	// fmt.Println("Rows---")
	// fmt.Println(diagonalLinesRows)
	// fmt.Println("---")

	// columns traversal
	ri := 0
	for c := 0; c < numOfColumnLines; c++ {
		line := []int{}
		for ci := c + 1; ci < len(mat[0]); ci++ {
			line = append(line, mat[ri][ci])
			ri++
		}
		ri = 0
		diagonalLinesColumns = append(diagonalLinesColumns, line)
	}
	// fmt.Println("Columns---")
	// fmt.Println(diagonalLinesColumns)
	// fmt.Println("---")

	return diagonalLinesRows, diagonalLinesColumns
}

func sortSlices(diagonalLinesRows [][]int, diagonalLinesColumns [][]int) ([][]int, [][]int) {
	sortedRows := [][]int{}
	sortedColumns := [][]int{}
	for _, v := range diagonalLinesRows {
		sort.Sort(SortIntAsc(v))
		sortedRows = append(sortedRows, v)
	}
	for _, v := range diagonalLinesColumns {
		sort.Sort(SortIntAsc(v))
		sortedColumns = append(sortedColumns, v)
	}
	return sortedRows, sortedColumns
}

func convertToSortedMatrix(mat [][]int, sortedRows, sortedColumns [][]int) {

	numOfRowLines := len(mat)
	numOfColumnLines := len(mat[0]) - 1
	sliceIndex, sliceItem := 0, 0

	// rows traversal
	ci := 0
	for r := 0; r < numOfRowLines; r++ {
		for ri := r; ri < len(mat); ri++ {
			mat[ri][ci] = sortedRows[sliceIndex][sliceItem]
			sliceItem++
			ci++
		}
		sliceItem = 0
		sliceIndex++
		ci = 0
	}
	sliceIndex = 0
	// fmt.Println("Rows---")
	// fmt.Println(diagonalLines)
	// fmt.Println("---")

	// columns traversal
	ri := 0
	for c := 0; c < numOfColumnLines; c++ {
		for ci := c + 1; ci < len(mat[0]); ci++ {
			mat[ri][ci] = sortedColumns[sliceIndex][sliceItem]
			sliceItem++
			ri++
		}
		sliceItem = 0
		sliceIndex++
		ri = 0
	}
	// fmt.Println("Columns---")
	// fmt.Println(diagonalLines)
	// fmt.Println("---")

}

type SortIntAsc []int

func (a SortIntAsc) Len() int           { return len(a) }
func (a SortIntAsc) Swap(i, j int)      { a[i], a[j] = a[j], a[i] }
func (a SortIntAsc) Less(i, j int) bool { return a[i] < a[j] }
