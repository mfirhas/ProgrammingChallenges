// https://projecteuler.net/problem=6

#include <bits/stdc++.h>

using namespace std;

int pow2(int n) {
    return n * n;
}

// (n(n+1)(2n+1))/6
int sumofsquares(int n) {
    return (n * (n + 1) * ( (2*n) + 1))/6;
}

// (n(n+1))/2
int squareofsums(int n) {
    return pow2((n * (n + 1))/2);
}

int main() {
    cout << "The difference is: " << abs(sumofsquares(100)-squareofsums(100)) << endl;
    return 0;
}