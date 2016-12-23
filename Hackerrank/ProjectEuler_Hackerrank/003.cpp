#include <bits/stdc++.h>
// Author: Muhammad Fathir Irhas
// Project Euler problem 003: Largest Prime Factor

using namespace std;

bool isPrime(long long x){
    if((x == 2) || (x == 3)){
        return true;
    }
    if((x == 1) || (x % 2 == 0)){
        return false;
    }

    for(long long i=3;i<=sqrt(x); i+=2){
        if(x%i==0){
            return false;
        }
    }
    return true;
}

int LargestPrimeFactor(long long* n){
    int val = 0;
    if(isPrime(*n)){
        return *n;
    }else{
        int i = 2;
        int temp = *n;
        while(true){
            if(temp % i == 0 && isPrime(i)){
                temp /= i;
                cout << temp << endl;
                if(isPrime(temp)){
                    val = temp;
                    return val;
                    break;
                }
            }else{
                i++;
            }
        }
    }
}

int main(){
    // long long t,n;
    // cin >> t;
    // for(int i=0;i<t;i++){
    //     cin >> n;
    //     cout << LargestPrimeFactor(&n) << endl;
    // }

    int n;
    cin >> n;
    n = n / 2;
    cout << n << endl;

    return 0;
}
