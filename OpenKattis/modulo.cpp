#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <vector>
#include <set>
#include <unordered_set>

using namespace std;

void Count(int *input){	
	int b[10];
	for(int i=0;i<10;i++){
		b[i] = *(input+i) % 42;
	}

	const size_t len = sizeof(b) / sizeof(b[0]);
	unordered_set<int> s(b, b+len);
	cout << s.size()<<endl;
}

int main(){
	int i = 0;
	int a[10];
	while(i<10){
		cin>>a[i];
		i++;
	}

	int *p = &a[0];
	Count(p);
	return 0;
}