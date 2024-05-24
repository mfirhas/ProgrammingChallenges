package main

import (
	"fmt"
	"math/big"
)

func main() {
	input := "37107287533902102798797998220837590246510135740250"
	input2 := "46376937677490009712648124896970078050417018260538"
	val1, _ := big.NewInt(0).SetString(input, 10)
	val2, _ := big.NewInt(0).SetString(input2, 10)
	val := big.NewInt(0)
	val.Add(val1, val2)
	fmt.Println(val)

	// bi := big.NewInt(0)
	// if _, ok := bi.SetString(input, 10); ok {
	// 	fmt.Printf("number = %v\n", bi)
	// } else {
	// 	fmt.Printf("error parsing line %#v\n", input)
	// }
}
