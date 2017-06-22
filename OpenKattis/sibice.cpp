#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, w, h;
    cin >> n >> w >> h;
    double d = sqrt( pow((double)w,2) + pow((double)h,2) );

    int m[n];
    for(int i=0;i<n;i++){
        cin >> m[i];
    }

    for(int j=0;j<n;j++){
        if( ((double)m[j] <= (double)w) 
        || ((double)m[j] <= (double)h) 
        || ((double)m[j] <= d ) ){
            cout << "DA" << endl;
        }else if( ((double)m[j] > (double)w) 
        && ((double)m[j] > (double)h) 
        && ((double)m[j] > d ) ) {
            cout << "NE" << endl;
        }
    }


    return 0;
}