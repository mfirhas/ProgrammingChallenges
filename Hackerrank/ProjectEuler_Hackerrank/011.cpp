#include <bits/stdc++.h>

using namespace std;



int main(){
    int m[20][20];

    for(int i=0;i<20;i++){
        for(int j=0;j<20;j++){
            cin >> m[i][j];
        }
    }

    vector<int> lists;
    lists.push_back(Horizontal(m));
    lists.push_back(Vertical(m));
    lists.push_back(Diagonal(m));
    int max = *max_element(lists.begin(), lists.end());
    cout << max << endl;

    return 0;
}