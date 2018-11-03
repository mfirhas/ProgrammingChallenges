// author: Muhammad Fathir Irhas
// date: 2018-11-03
// sample input:
// 3
// RSTEEOTCP
// eedARBtVrolsiesuAoReerles
// 	EarSvyeqeBsuneMa
// 	sample output:
// TOPSECRET
// 	RosesAreRedVioletsAreBlue
// 	SquaresMayBeEven
// ----
// previous solution using Go(same case and same algorithm):
// package main
// import (
// 	"fmt"
// 	"math"
// )

// func decodeMsg(msg string) string {
// 	n := int(math.Sqrt(float64(len(msg))))
// 	decodedMsg := ""
// 	for i := 0; i < n; i++ {
// 		for j := 0; j < n; j++ {
// 			decodedMsg += string(msg[((n*(j+1))-i)-1])
// 		}
// 	}
// 	return decodedMsg
// }

// func main() {
// 	var (
// 		n int
// 		s string
// 	)

// 	fmt.Scanln(&n)
// 	for i := 0; i < n; i++ {
// 		fmt.Scanln(&s)
// 		fmt.Println(decodeMsg(s))
// 	}
// }
// result: in this case c++ is faster

#include <bits/stdc++.h>
using namespace std;

string decodeMsg(string msg) {
    int len = msg.length();
    int n = (int)sqrt((float)len);
    string decodedMsg = "";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            decodedMsg += msg[((n*(j+1))-i)-1];
        }
    }
    return decodedMsg;
}

int main() {
  int n;
  string msg;
  cin >> n;
  for(int i=0;i<n;i++) {
    cin >> msg;
    cout << decodeMsg(msg) << endl;
  }
}


