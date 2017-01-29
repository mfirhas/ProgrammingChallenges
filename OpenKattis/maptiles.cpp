#include <bits/stdc++.h>

using namespace std;

void PrintCoordinate(string input){
    int x = 0;
    int y = 0;
    string output = "";
    int level = input.length();
    for(int i=0;i<level;i++){
        int k = input[level - i - 1] - '0';
        if(k == 0){
        }else if(k == 1){
            x += pow(2,i+1)/2;
        }else if(k == 2){
            y += pow(2,i+1)/2;
        }else if(k == 3){
            x += pow(2,i+1)/2;
            y += pow(2,i+1)/2;
        }      
    }

    stringstream ss;
    ss << level << " " << x << " " << y;
    cout << ss.str() << endl;
}

int main(){
    string input;
    cin >> input;
    PrintCoordinate(input);
    return 0;
}