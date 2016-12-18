#include <bits/stdc++.h>

using namespace std;

long long SumAll(long long* arr, int* n){
    long long r = 0;
    for(int i=0;i<*n;i++){
        r += *(arr+i);
    }
    return r;
}

int main(){
    int n;
    cin >> n;
    vector<long long> arr(n);
    for(int arr_i = 0;arr_i < n;arr_i++){
       cin >> arr[arr_i];
    }

    long long r = SumAll(&arr[0],&n);
    cout << r <<endl;
    return 0;
}
