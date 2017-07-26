#include <bits/stdc++.h>

using namespace std;

double *detectChar(string s){
    
    static double r[4] = {0,0,0,0};

    for(int i=0;i<s.length();i++){
        if( int(s[i]) == 95 ){
            r[0] += 1; // underscore
        } else if( int(s[i]) >= 97 && int(s[i]) <= 122 && int(s[i]) != 95){
            r[1] += 1; // lowercase
        } else if( int(s[i]) >= 65 && int(s[i]) <= 90 && int(s[i]) != 95 ){
            r[2] += 1; // uppercase
        } else {
            r[3] += 1; // symbol
        }
    }
    
    for(int j=0;j<4;j++) r[j] /= s.length();

    return &r[0];
}


int main(){

    string s;
    cin >> s;
    
    double *r = detectChar(s);
    cout << setprecision(15) << *(r+0) << endl;
    cout << setprecision(15) << *(r+1) << endl;
    cout << setprecision(15) << *(r+2) << endl;
    cout << setprecision(15) << *(r+3) << endl;

    return 0;
}