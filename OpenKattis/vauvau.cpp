#include <bits/stdc++.h>

using namespace std;

int main(){
    int a,b,c,d;
    cin >> a >> b >> c >> d;
    int p,m,g;
    cin >> p >> m >> g;
    if((a-p>-1) && (c-p>-1)){
        cout << "both" << endl;
    }else if((a-p>-1) && (c-p<0)){
        cout << "one" << endl;
    }else if((a-p<0) && (c-p>-1)){
        cout << "one" << endl;
    }else if((a-p<0) && (c-p<0)){
        cout << "none" << endl;
    }

    if((a-m>-1) && (c-m>-1)){
        cout << "both" << endl;
    }else if((a-m>-1) && (c-m<0)){
        cout << "one" << endl;
    }else if((a-m<0) && (c-m>-1)){
        cout << "one" << endl;
    }else if((a-m<0) && (c-m<0)){
        cout << "none" << endl;
    }

    if((a-g>-1) && (c-g>-1)){
        cout << "both" << endl;
    }else if((a-g>-1) && (c-g<0)){
        cout << "one" << endl;
    }else if((a-g<0) && (c-g>-1)){
        cout << "one" << endl;
    }else if((a-g<0) && (c-g<0)){
        cout << "none" << endl;
    }

    return 0;
}