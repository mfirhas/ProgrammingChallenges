#include <bits/stdc++.h>

int main(){
    int n;
    std::cin >> n;
    int a[n];
    for(int i=0;i<n;i++){
        std::cin >> a[i];
    }

    for(int i=n-1;i>=0;i--){
        std::cout << a[i] << " ";
    }
    return 0;
}