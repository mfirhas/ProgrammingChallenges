#include <bits/stdc++.h>

using namespace std;

string ToString(int i)
{
    stringstream ss;
    ss << i;
    return ss.str();
}

int ToInt(string i){
    istringstream ss(i);
    ss >> thevalue;
    return ss;
}

bool CheckSame(int x, int y){
    string sx = ToString(x);
    string sy = ToString(y);
    int c = 0;
    for(int i = 0;i < sy.length(); i++){
        int n = sx.length();
        for(int j=0;j<n;j++){
            if(sy[i] == sx[j]){
                c++;
                sx.erase(j,1);
                break;
            }
        }
    }
    if(c==sy.length()){
        return true;
    }else{
        return false;
    }
}

int Result(int x, vector<string> l){
    int i = 0;
    while(true){
        if(x < (int)l[i]){
            return (int)l[i];
        }
        i++;
    }
    return 0;
}

int main(){
    vector<string> l;
    int x;
    cin >> x;
    string sx = ToString(x);
    sort(sx.begin(), sx.end());
    while(next_permutation(sx.begin(), sx.end())){
        l.push_back(sx);
    }
    sort(l.begin(), l.end());

    cout << Result(x, l) << endl;

    return 0;
}