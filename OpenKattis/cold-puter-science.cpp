#include <iostream>
using namespace std;

int CountNegatives(int *p, int n){
	int sum = 0;
	for(int i=0; i<n; i++){
		if(*(p+i) < 0)
			sum++;
	}
	return sum;
}

int main(){
	int n;
	cin >> n;
	int a[n];
	for(int i=0;i<n;i++){
		cin >> a[i];
	}
	
	int *p = &a[0];
	int result = CountNegatives(p,n);
	cout<<result;
	return 0;
}