#include <bits/stdc++.h>

using namespace std;

int ToInt(string s){
    int value;
    stringstream ss(s);
    ss >> value;
    return value;
}

int main(){
    string x;
    cin >> x;
    int _x = ToInt(x);
    next_permutation(x.begin(), x.end());
    int x_ = ToInt(x);
    cout << (x_ > _x ? x_ : 0) << endl;

    return 0;
}