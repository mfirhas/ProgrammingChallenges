#include <bits/stdc++.h>

// Author: Muhammad Fathir Irhas - 28/01/2017 - OpenKattis
/*  Algorithm:
 *
 *  If n1 > n2:
 *	    Clockwise -> (360-n1) + n2
 *	    CounterClockwise -> n1-n2
 *  else if n1 < n2:
 *	    Clockwise -> n2-n1
 *	    CounterClockwise -> (360-n2)+n1
 *
 */

using namespace std;

int Opt1(int a, int b){
    return a-b;
}

int Opt2(int a, int b){
    return (360 - a) + b;
}

int ChangeMeasure(int* n1, int* n2){
    if(*n1 > *n2){
        int Clockwise = Opt2(*n1,*n2);
        int CounterClockwise = Opt1(*n1,*n2);
        return (Clockwise <= CounterClockwise) ? Clockwise : (CounterClockwise * -1);
    }else{
        int Clockwise = Opt1(*n2,*n1);
        int CounterClockwise = Opt2(*n2,*n1);
        return (Clockwise <= CounterClockwise) ? Clockwise : (CounterClockwise * -1);
    }
}

int main(){
    int n1,n2;
    cin >> n1;
    cin >> n2;
    cout << ChangeMeasure(&n1, &n2) << endl;

    return 0;
}