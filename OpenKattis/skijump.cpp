#include <iostream>
#include <stdlib.h>
#include <stdio.h>

using namespace std;

int main(){
	int testCaseNum;
	cin>>testCaseNum;
	int **input;
	input = new int*[testCaseNum];
	for(int i=0; i<testCaseNum; i++){
		input[i] = new int[4];
	}
	
	for(int i=0;i<testCaseNum;i++){
		// Input consecutively: (j=tinggi plosotan,p=heigh between plosotan and jumping hill,H=hill height,L=Hill width)
		cin>>input[i][0]>>input[i][1]>>input[i][2]>>input[i][3];
	}


	return 0;
}