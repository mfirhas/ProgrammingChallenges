#include <bits/stdc++.h>

using namespace std;


int main(){
    int num;
    cin >> num;
    int list[num];
    double p = 0;
    double n = 0;
    double z = 0;
    for(int i=0;i<num;i++){
        cin >> list[i];
    }

    for(int j=0;j<num;j++){
        if(list[j] > 0)
            p++;
        else if(list[j] == 0)
            z++;
        else
            n++;
    }
    cout << setprecision(6) << (p/(double)num) << endl;
    cout << setprecision(6) << (n/(double)num) << endl;
    cout << setprecision(6) << (z/(double)num) << endl;

    return 0;
}