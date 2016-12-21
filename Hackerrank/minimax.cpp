// Author: Muhammad Fathir Irhas
// Hackerrank.

#include <bits/stdc++.h>

using namespace std;

int main(){
    int a[5];
    long long sum_min = 0;
    long long sum_max = 0;
    cin >> a[0] >> a[1] >> a[2] >> a[3] >> a[4];
    sort(a, a+5);
    
    for(int i=0;i<4;i++){
        sum_min += a[i];
    }
    for(int j=1;j<5;j++){
        sum_max += a[j];
    }

    cout << sum_min << " " << sum_max << endl;

    return 0;
}