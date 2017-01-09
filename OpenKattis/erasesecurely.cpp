#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    string before, after;
    cin >> before;
    cin >> after;

    if(n%2==0){
        if(after == before){
            cout << "Deletion succeeded" << endl;
        }else{
            cout << "Deletion failed" << endl;
        }
    }else{
        int c = 0;
        for(int i=0;i<before.length();i++){
            int b = before[i] - '0';
            int a = after[i] - '0';
            if(a+b!=1){
                cout << "Deletion failed" << endl;
                break;
            }
            c++;
        }
        if(c == before.length()){
            cout << "Deletion succeeded" << endl;
        }
    }

    return 0;
}