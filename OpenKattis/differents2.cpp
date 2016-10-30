#include <iostream>
#include <stdio.h>
#include <stdlib.h>

long long Abs(long long z){
	if(z<0){
		return z * -1;
	}else{
		return z;
	}
}

int main(){
	long long x,y;
	while(std::cin>>x>>y){
		std::cout<<Abs(x-y)<<"\n";
	}
	return 0;
}