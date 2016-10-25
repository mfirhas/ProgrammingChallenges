#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

using namespace std;

int main(){
	char jon[999], doctor[999];
	cin>>jon;
	cin>>doctor;
	if(strlen(jon)>=strlen(doctor)){
		cout<<"go"<<"\n";
	}else{
		cout<<"no"<<"\n";
	}
	return 0;
}