#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

using namespace std;

bool IsUnique(long long *c){
	
}
	
long long Calculate(long long *pa, long long *pb, int opt){
	switch(opt){
		case 1:
			return pa*pb;
			break;
		case 2:
			return pa+pb;
			break;
		case 3:
			return pa-pb;
			break;
	}
}

void Process(long long *pa, long long *pb, int opt){
	long long c[2500];
	int opt_list[3];


	for(int i=0;i<sizeof(pa)/sizeof(*pa);i++){
		if(i==0){
			c[i] = Calculate(*(pa+i), *(pb+i), opt);
		}
	}
}

int main(){
	int num;
	int opt = 1;
	cin>>num;
	long long a[2500];
	long long b[2500];
	for(int i=0;i<num;i++){
		cin >> a[i] >> b[i];
	}

	long long *pa = &a[0];
	long long *pb = &b[0];
	Calculate(pa,pb,opt);

	return 0;
}