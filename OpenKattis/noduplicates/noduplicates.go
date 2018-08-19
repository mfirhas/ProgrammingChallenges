package main

import (
	"bufio"
	"fmt"
	"os"
	"strings"
)

func getWords(s string) []string {
	return strings.Fields(s)
}

func detectDuplicate(s string) string {
	as := getWords(s)
	for i := 0; i < len(as)-1; i++ {
		for j := i + 1; j < len(as); j++ {
			if as[i] == as[j] {
				return "no"
			}
		}
	}
	return "yes"
}

func main() {
	read := bufio.NewReader(os.Stdin)
	s, _ := read.ReadString('\n')
	fmt.Println(detectDuplicate(s))
}
