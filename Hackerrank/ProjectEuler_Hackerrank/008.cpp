#include <bits/stdc++.h>

// Author: Muhammad Fathir Irhas - ProjectEuler008 - Hackerrank

using namespace std;

int to_int(char i){
    int b = i - '0'; 
    return b;
}

int LargestProduct(int a, int b, string c){
    vector<string> s;
    vector<int> l;
    for(int i=0;i<(a-b)+1;i++){
        s.push_back(c.substr(i,b));
    }

    for(int j=0;j<s.size();j++){
        string si = s[j];
        int p = 1;
        for(int k=0;k<si.length();k++){
            p *= to_int(si[k]);
        }
        l.push_back(p);
    }
    int maxProducts = *max_element(l.begin(), l.end());
    return maxProducts;
}

int main(){
    int x;
    cin >> x;
    for(int i=0;i<x;i++){
        int a,b;
        string c;
        cin >> a >> b;
        cin >> c;
        cout << LargestProduct(a,b,c) << endl;      
    }

    return 0;
}