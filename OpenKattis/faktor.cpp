#include <bits/stdc++.h>

using namespace std;

void Foo(int a, int i){
    
    double _a = (double)a;
    double _i = (double)i;
    double s = _a * _i;

    double __i = s / _a;
    while(ceil(__i) == _i){
        s = s - 1;
        
    }

    
}

int main(){

    int a,i;
    cin >> a >> i;
    cout << Foo(a, i);
    // Foo(a,i);
    return 0;
}