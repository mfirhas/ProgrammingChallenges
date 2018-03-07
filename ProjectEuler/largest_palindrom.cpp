/*
	find largest palindrom of product of 3 digit
*/
#include <bits/stdc++.h>

using namespace std;

bool isPalindrom(int num) {

	int n, digit, rev = 0;
	n = num;

	do
	{
		digit = num % 10;
		rev = (rev * 10) + digit;
		num = num / 10;
	} while (num != 0);

	return n == rev ? true : false;
}

int findLargestPalindrom() {
	vector<int> v;
	for(int i = 100; i < 1000; i++) {
		for(int j = 100; j < 1000; j++) {
			if(isPalindrom(i*j)) {
				v.push_back(i*j);
			}
		}
	}
	return *max_element(v.begin(), v.end());
}

int main() {

	cout << "Largest Palindrom is: " << findLargestPalindrom() << endl;
	return 0;
}