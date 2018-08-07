package main

import (
	"bufio"
	"fmt"
	"os"
	"strconv"
	"strings"
)

func toInt(s string) int {
	v, _ := strconv.Atoi(s)
	return v
}

func isPossible(input string) string {
	fields := strings.Fields(input)
	a := toInt(fields[0])
	b := toInt(fields[1])
	c := toInt(fields[2])
	if check(a, b, c) {
		return "Possible"
	} else {
		return "Impossible"
	}
}

func check(x, y, z int) bool {
	a := float64(x)
	b := float64(y)
	c := float64(z)
	return a+b == c || b+a == c || a*b == c || b*a == c || a-b == c || b-a == c || a/b == c || b/a == c
}

func main() {
	var caseNum int
	reader := bufio.NewReader(os.Stdin)
	fmt.Scanln(&caseNum)
	for i := 0; i < caseNum; i++ {
		input, _ := reader.ReadString('\n')
		fmt.Println(isPossible(input))
	}
}
