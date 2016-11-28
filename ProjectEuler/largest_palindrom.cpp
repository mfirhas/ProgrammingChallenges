/*
	find largest palindrom of product of 3 digit
*/
#include <iostream>
#include <math.h>

using namespace std;

char *toArray(int a){
	int n = log10(a) + 1;
	int i;
	char *numberArray = calloc(n,sizeof(char));
	for(i=0;i<n; ++i, a /= 10){
		numberArray[i] = a % 10;
	}
	return numberArray;
}

bool isPalindrom(int *p){
	int x = *p;
	char a[6],b[6];
	int st[6];
	int i=0;
	int j=0;

	a = toArray(x);
	//inverted version
	do{
		int digit_b = x % 10;
		b[i] = digit_b;
		i++;
		x /= 10;
	}

	if(a==b){
		return true;
	}else{
		return false;
	}

}

int main(){
	int c, *p;
	int palindrom[1000];

	int n = 0;
	for(int i=100;i<=999;i++){
		for(int j=100;j<=999;j++){
			c = i*j;
			*p = &c;
			if(isPalindrom(p) == true)
				palindrom[n] = 
		}
	}

	return 0;
}