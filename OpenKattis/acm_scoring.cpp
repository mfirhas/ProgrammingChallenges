#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MaxLine 100
#define MaxTime 300

using namespace std;

int main(){
	int line = 0;
	int time[100];
	char label[100];
	string rw[100];
	int n;

	while(cin >> time[line] >> label[line] >> rw[line] && time[line] >= 0 && label[line] != '\0' && rw[line] != ""){
		if(time[line] == -1 && label[line] == '\0' && rw[line] == ""){
			break;
		}else{
			line++;
		}
	}

	for(int i=0;i<sizeof(time)/sizeof(*time);i++){
		cout << time[i] << endl;
	}
	return 0;	
}