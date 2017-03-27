#include <bits/stdc++.h>

using namespace std;

/*
 * Author: Muhammad Fathir Irhas - OpenKattis - 26/03/2017
 */

int SurvivedMosquitos(int M , int P, int L, int E, int R, int S, int N){
    int m = M;
    int p = P;
    int l = L;

    for(int i=0;i<N;i++){
        int m_ = floor(p/S);
        int p_ = floor(l/R);
        int l_ = m * E;

        m = m_;
        p = p_;
        l = l_;
    }

    return m;
}

int main(){
    int M , P, L, E, R, S, N;
    // Inputs need several instances
    while(cin >> M >> P >> L >> E >> R >> S >> N){
       cout << SurvivedMosquitos(M , P, L, E, R, S, N) << endl; 
    }
    return 0;
}