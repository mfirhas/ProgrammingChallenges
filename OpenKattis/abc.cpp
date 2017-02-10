#include <bits/stdc++.h>

// Author: Muhammad Fathir Irhas - OpenKattis - 10/02/2017

using namespace std;

void rearrange(int a, int b, int c, string s){
    vector<int> v;
    map<char, int> m;
    v.push_back(a);
    v.push_back(b);
    v.push_back(c);
    sort(v.begin(), v.end());
    int a_ = v[0];
    int b_ = v[1];
    int c_ = v[2];
    m['A'] = a_;
    m['B'] = b_;
    m['C'] = c_;
    cout << m[s[0]] << " " << m[s[1]] << " " << m[s[2]];
}

int main(){
    int a,b,c;
    cin >> a >> b >> c;
    string s;
    cin >> s;
    rearrange(a,b,c,s);

    return 0;
}