#include <bits/stdc++.h>

// Author: Muhammad Fathir Irhas - 26/01/2017 - OpenKattis

using namespace std;

void MixedFraction(long long* n, long long* d){
    long long r = *n / *d;
    long long n_ = *n - (r * (*d));
    cout << r << " " << n_ << " / " << *d << endl;
}

int main(){
    long long n, d;
    
    while(true){
        cin >> n >> d;
        if(n==0 && d==0){
            break;
        }
        MixedFraction(&n, &d);
    }

    return 0;
}