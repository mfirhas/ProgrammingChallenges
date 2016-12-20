#include <bits/stdc++.h>

using namespace std;

void Print24Time(string* input){
    if(*input.substr(0,2) == "12" && *input.substr(8,2) == "AM"){
        cout << "00:" << *input.substr(3,5) << endl;
    }else if(*input.substr(8,2) == "PM"){
        cout << "13:" << *input.substr(3,5) << endl;
    }
}

int main(){
    string* input;
    cin >> input;
    Print24Time(&input);
    return 0;
}