#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

using namespace std;

long long Calculate(long long *p){
	long long sum = 0;
	for(int i=0;i<4000000;i++){
		if(p[i] % 2 == 0){
			sum += p[i];
		}
	}
	return sum;
}

int main(){
	long long *p = new long long[4000000];
	long long first=0,second=1,next;
	for(long long i=0;i<4000000;i++){
		if(i<=1){
			next = i;
		}else{
			next = first + second;
			first = second;
			second = next;
		}
		p[i] = next;
	}

	long long *pointer = &p[0];
	cout<<"Sum: "<<Calculate(pointer)<<"\n";

	return 0;
}