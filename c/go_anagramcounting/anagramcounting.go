package main

import (
	"fmt"
	"sort"
)

// aku, kau, kamu, muka, makan

type Runes []rune

func (a Runes) Len() int           { return len(a) }
func (a Runes) Swap(i, j int)      { a[i], a[j] = a[j], a[i] }
func (a Runes) Less(i, j int) bool { return a[i] < a[j] }

// sort anagram
func SortAnagram(a []string) []string {
	m := make(map[string]string)
	result := []string{}
	for _, v := range a {
		r := Runes(v)
		sort.Sort(r)
		if _, ok := m[string(r)]; !ok {
			m[string(r)] = v
			result = append(result, v)
		}
	}
	return result
}

func main() {
	s := []string{"aku", "kau", "kamu", "muka", "makan", "makanan"}
	fmt.Println(SortAnagram(s))
}
