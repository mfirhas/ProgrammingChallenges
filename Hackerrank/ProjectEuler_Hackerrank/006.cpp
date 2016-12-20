// Author: Muhammad Fathir Irhas
// Project Euler 006 Hackerrank Sum difference

#include <bits/stdc++.h>

using namespace std;

unsigned long long OneLiner(unsigned long long* n){
    unsigned long long absdiff = pow(((*n * (*n + 1)) / 2),2) - (*n * (*n + 1) * (2 * (*n) + 1)) / 6;
    return absdiff;
}

int main(){
    unsigned long long num;
    cin >> num;
    unsigned long long list[num];
    for(unsigned long long i=0;i<num;i++){
        cin >> list[i];
    }

    for(unsigned long long j=0;j<num;j++){
        cout << OneLiner(&list[j]) << endl;
    }


    return 0;
}