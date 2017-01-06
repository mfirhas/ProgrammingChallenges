#include <bits/stdc++.h>

using namespace std;

string CountDogs(int t, int a, int b, int c, int d){
    int dog = 0;
    if((t%(a+b)<=a) && (t%(a+b)!=0)){
        dog++;
    }
    if((t%(c+d)<=c) && (t%(c+d)!=0)){
        dog++;
    }
    if(dog == 0){
        return "none\n";
    }else if(dog==1){
        return "one\n";
    }else if(dog==2){
        return "both\n";
    }else{
        return " ";
    }
}

int main(){
    int a,b,c,d;
    cin >> a >> b >> c >> d;
    int p,m,g;
    cin >> p >> m >> g;
    cout << CountDogs(p,a,b,c,d);
    cout << CountDogs(m,a,b,c,d);
    cout << CountDogs(g,a,b,c,d);
    return 0;
}