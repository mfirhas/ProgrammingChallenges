#include <bits/stdc++.h>

using namespace std;

int main(){

    int x, n;

    cin >> x;
    cin >> n;
    int p[n];
    
    for(int i=0;i<n;i++){
        cin >> p[i];
    }

    int sum = 0;
    for(int j=0;j<n;j++){
        sum += (x-p[j]);
    }

    cout << (x+sum) << endl;


    return 0;
}