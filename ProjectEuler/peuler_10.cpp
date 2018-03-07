// https://projecteuler.net/problem=10

#include <bits/stdc++.h>

using namespace std;

bool isPrime(int n) {

    bool isPrime = true;
    for(int i = 2; i <= n / 2; ++i)
    {
        if(n % i == 0)
        {
            isPrime = false;
            break;
        }
    }
    return isPrime;
}

int main() {

    vector<int> v;
    for(int i=2; i<10; i++) {
        if(isPrime(i)) {
            v.push_back(i);
        }
    }

    cout << accumulate(v.begin(), v.end(), 0) << endl;

    return 0;
}