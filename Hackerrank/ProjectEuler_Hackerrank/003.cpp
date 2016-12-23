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

long long LargestPrimeFactor(long long n){
    long long val = 0;
    if(isPrime(n)){
        return n;
    }else{
        long long i = 2;
        long long temp = n;
        while(true){
            if(temp % i == 0 && isPrime(i)){
                temp /= i;
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
    long long t,n;
    cin >> t;
    for(long long i=0;i<t;i++){
        cin >> n;
        long long largest = LargestPrimeFactor(n);
        cout << largest << endl;
    }

    return 0;
}
