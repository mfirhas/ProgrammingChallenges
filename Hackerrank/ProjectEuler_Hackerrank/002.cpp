// Author: Muhammad Fathir Irhas
// 002 Sum of all even number of fibonaci

#include <bits/stdc++.h>

using namespace std;

long long SumEvenFibonacci(long long* n){
    long long a = 0;
	long long b = 1;
	long long c;
	long long sum = 0;

	do{
        if(b % 2 == 0) //check if number is even
			sum += b;
		c = a + b;
		a = b;
		b = c;
	}while(b <= *n);
    return sum;
}

int main(){
    long long num;
    cin >> num;
    long long list[num];
    for(long long i=0;i<num;i++){
        cin >> list[i];
    }

    for(int j=0;j<num;j++){
        cout << SumEvenFibonacci(&list[j]) << endl;
    }

	return 0;
}