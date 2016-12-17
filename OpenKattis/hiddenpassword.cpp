#include <bits/stdc++.h>

using namespace std;

int main(){
    string pass = "";
    string message = "";
    int pass_length = 0;
    int message_length = 0;
    int pass_index = 0;
    int message_index = 0;


    cin >> pass >> message;
    pass_length = pass.length();
    message_length = message.length();

    while(pass_length >= pass_index && message_index <= message_length)
    {
        if (pass[pass_index] == (message[message_index]))
        {
            pass_index++;
            message_index++;
            continue;
        }
        else
        {
            if(pass.substr(pass_index,pass.length()).find(message[message_index]) != string::npos)
            {
                cout << "FAIL" << endl;
                return 0;
            }
            else
            {
                message_index++;
            }
        }
    }

    if (pass_length != (pass_index-1))
    {
        cout << "FAIL" <<endl;
        return 0;
    }
    cout << "PASS" << endl;

    return 0;
}