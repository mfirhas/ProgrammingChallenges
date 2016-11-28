/*
	Sum all even numbers of fibonacci until 4000000
*/
#include <iostream>

using namespace std;

int main(){
	int a = 0;
	int b = 1;
	int c;
	int sum = 0;

	do{
		c = a + b;
		a = b;
		b = c;

		if(b % 2 == 0) //check if number is even
			sum += b;

	}while(b <= 4000000);

	cout << sum; //return sum of all even number
	return 0;
}