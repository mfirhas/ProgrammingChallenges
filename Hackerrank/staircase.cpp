#include <bits/stdc++.h>

using namespace std;

void PrintStaircase(int* num){
    for(int i=1;i<=*num;i++){
        for(int j=1;j<=*num-i;j++){
            cout << " ";
        }
        for(int k=1;k<=i;k++){
            cout << "#";
        }
        cout << endl;
    }
}

int main(){
    int num;
    cin >> num;
    PrintStaircase(&num);
    return 0;
}