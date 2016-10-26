#include <iostream>
#include <stdio.h>
#include <stdlib.h>

void CalculateDifferences(long int *a, long int *b, int size){
	long int c[100];
	for(int i=0;i<size;i++){
		c[i] = abs( (*(a+i)) - (*(b+i)) );
		std::cout<<c[i] << std::endl;
	}
}

int main(){
	long int a[100];
	long int b[100];
	int i = 0;
	int size = 0;
	while(std::cin >> a[i] >> b[i]){
		i++;
		size++;
		if(std::cin.eof()==1){
			break;
		}
	}
	long int *p1 = &a[0];
	long int *p2 = &b[0];
	CalculateDifferences(p1,p2,size);
	return 0;
}