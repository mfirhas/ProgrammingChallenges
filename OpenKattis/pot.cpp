#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

using namespace std;

long long Calculate(int *bil, int N){
	long long sum = 0;
	for(int i=0;i<N;i++){
		sum += pow(*(bil+i)/10, *(bil+i)%10); 
	}

	return sum;
}

int main(){
	int N;
	int bil[10];
	cin>>N;
	for(int i=0;i<N;i++){
		cin>>bil[i];
	}

	int *p = &bil[0];
	cout<<Calculate(p,N);
	return 0;
}