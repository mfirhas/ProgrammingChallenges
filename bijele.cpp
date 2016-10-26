#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

void Process(int *input){
	int set[6] = {1,1,2,2,2,8};
	int out[6];
	for(int i=0;i<6;i++){
		out[i] = set[i] - *(input+i);
	}

	for(int i=0;i<6;i++)
		cout<<out[i]<<" ";
}

int main(){
	int i=0;

  	int input[6];
  	cin >> input[0] >> input[1] >>input[2] >>input[3] >>input[4] >>input[5];
	int *p = &input[0];
	Process(p);

	cout<<"\n";
	return 0;
}