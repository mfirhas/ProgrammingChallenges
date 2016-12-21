#include <bits/stdc++.h>

using namespace std;

int findIndex(int arr[], int len, int seek)
{
    for (int i = 0; i < len; ++i)
    {
        if (arr[i] == seek) return i;
    }
    return -1;
}

int main(){
    int v;
    int n;
    cin >> v;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }

    int index = findIndex(arr,n,v);
    cout << index << endl;

    return 0;
}