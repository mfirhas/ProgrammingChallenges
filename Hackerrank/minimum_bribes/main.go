package main

import (
	"fmt"
	"sort"
)

/*
It is New Year's Day and people are in line for the Wonderland rollercoaster ride. Each person wears a sticker indicating their initial position in the queue from  to . Any person can bribe the person directly in front of them to swap positions, but they still wear their original sticker. One person can bribe at most two others.

Determine the minimum number of bribes that took place to get to a given queue order. Print the number of bribes, or, if anyone has bribed more than two people, print Too chaotic.

Example


If person  bribes person , the queue will look like this: . Only  bribe is required. Print 1.


Person  had to bribe  people to get to the current position. Print Too chaotic.

Function Description

Complete the function minimumBribes in the editor below.

minimumBribes has the following parameter(s):

int q[n]: the positions of the people after all bribes
Returns

No value is returned. Print the minimum number of bribes necessary or Too chaotic if someone has bribed more than  people.
Input Format

The first line contains an integer , the number of test cases.

Each of the next  pairs of lines are as follows:
- The first line contains an integer , the number of people in the queue
- The second line has  space-separated integers describing the final state of the queue.

Constraints

Subtasks

[2, 1, 5, 3, 4] 0
[1, 2, 5, 3, 4] 2 bribes one
[1, 2, 3, 5, 4] 5 bribes one
[1, 2, 3, 4, 5] 5 bribes two

no one bribes more than 2
*/

func main() {
	// a := []int32{2, 1, 5, 3, 4}
	a := []int32{1, 2, 5, 3, 7, 8, 6, 4}
	minimumBribes(a)
}

const MAX_BRIBE = 2

func minimumBribes(q []int32) {
	// Write your code here
	totalBribes := 0
	n := 0
	sorted := false
	for !sorted {
		for i := 0; i < len(q)-1; i++ {
			if q[i] > q[i+1] {
				n++
				q[i], q[i+1] = q[i+1], q[i]
				totalBribes++
			} else {
				n = 0
			}
			if n > MAX_BRIBE {
				fmt.Println("Too chaotic")
				return
			}
		}
		if sort.SliceIsSorted(q, func(i, j int) bool {
			return q[i] <= q[j]
		}) {
			sorted = true
		}
	}
	fmt.Println(totalBribes)
}
