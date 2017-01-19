#include <bits/stdc++.h>

using namespace std;

const int N=20;
int m[N+10][N+10];

int main(){
    int max_product=0;
    for(int i=3;i<N+3;++i)
        for(int j=3;j<N+3;++j)
            cin>>m[i][j];
    for(int i=3;i<N+3;++i)
        for(int j=3;j<N+3;++j)
        {
            max_product=max(max_product,m[i][j]*m[i+1][j]*m[i+2][j]*m[i+3][j]);
            max_product=max(max_product,m[i][j]*m[i][j+1]*m[i][j+2]*m[i][j+3]);
            max_product=max(max_product,m[i][j]*m[i+1][j+1]*m[i+2][j+2]*m[i+3][j+3]);
            max_product=max(max_product,m[i][j]*m[i-1][j+1]*m[i-2][j+2]*m[i-3][j+3]);
        }
     cout<<max_product<<endl;
     return  0;
}