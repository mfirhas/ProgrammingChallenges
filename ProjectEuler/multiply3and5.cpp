#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

using namespace std;

int Sum(int *pm, int c){
	int sum=0;
	for(int i=0;i<c;i++){
		sum += *(pm+i);
	}

	return sum;
}

int main(){
	int multiples[1000];
	int c = 0;
	for(int i=0;i<1000;i++){
		if( (i % 3 == 0) || (i % 5 == 0) ){
			multiples[c] = i;
			c++;
		}
	}

	int *pm = &multiples[0];
	cout<<"Sum: "<<Sum(pm, c) << "\n";
	return 0;
}