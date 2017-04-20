#include <bits/stdc++.h>

using namespace std;

int pow2(int i){
    return pow(2,i);
}

// return d(minimum bar bought)
int Bar(int k){
    int n = 1;
    int i,d = 0;

    // minimum bar bought
    while(n < k){
        if(n >= k){
            d = n; 
            break;
        }
        i++;
        n = pow2(i);
    }
    return d;
}

// return b(minimum break count)
int Breaks(int k){
    int bar = Bar(k);
    int s,b = 0;
    while(s != k){
        if(bar == 1 && bar == k){
            b = 0;
            break;
        }
        if( bar/2 == k ){
            b = 1;
            break;
        }
        

        bar /= 2;
        b++;
        s += bar;
        

    }
}

int main(){

    int k;
    cin >> k;


    return 0;
}