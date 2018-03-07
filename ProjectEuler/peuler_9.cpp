// https://projecteuler.net/problem=9

#include <bits/stdc++.h>

using namespace std;

int main() {

    for(int a=1;a<=1000;a++) {
        for(int b=a; b <= 1000; b++) {
            int c = 1000 - a - b;
            if (c > 0) {
                if (c*c == a*a + b*b) {
                    cout << a*b*c << endl;
                    break;
                }
            }
        }
    }

    return 0;
}