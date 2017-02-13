#include <bits/stdc++.h>

using namespace std;

int main(){
    int a,b,c;
    cin >> a >> b >> c;
    int _a_ = c-b-1;
    int _b_ = b-a-1;
    int _c_ = _a_ > _b_ ? _a_ : _b_;
    cout << _c_ << endl;

    return 0;
}