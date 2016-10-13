/*
 * Author: Muhammad Fathir Irhas
 */
#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;


int Process(char *input){
	int pos = 1;
	for(int i=0;i<strlen(input);i++){
		if(pos == 1){
			if(*(input+i) == 'A'){
				pos = 2;
			}else if(*(input+i) == 'B'){
				pos = 1;
			}else if(*(input+i) == 'C'){
				pos = 3;
			}
		}else if(pos == 2){
			if(*(input+i) == 'A'){
				pos = 1;
			}else if(*(input+i) == 'B'){
				pos = 3;
			}else if(*(input+i) == 'C'){
				pos = 2;
			}
		}else if(pos == 3){
			if(*(input+i) == 'A'){
				pos = 3;
			}else if(*(input+i) == 'B'){
				pos = 2;
			}else if(*(input+i) == 'C'){
				pos = 1;
			}	
		}		
	}
	return pos;
}

int main(){
	char input[50];
	cin >> input;
	char *p = &input[0];
	cout<< Process(p);
	cout<<"\n";
	
	return 0;	
}