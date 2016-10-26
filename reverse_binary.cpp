#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <bitset>
#include <string>
#include <string.h>

using namespace std;

long long ReverseBinary(long long x){
	string binary = bitset<64>(x).to_string();
	string binaryString = "";
	//Take needed string
	for(int j=0;j<binary.length();j++){
		if(binary[j] == '1'){
			for(int k = j; k<binary.length();k++){
				binaryString += binary[k];
			}
			break;	
		}
	}

	long long reversed_number = 0;
	for(int i=0;i<binaryString.length();i++){
		reversed_number += (pow(2,i) * (binaryString[i]-'0'));
	}
		
	return reversed_number;
}

int main(){
	long long x;
	cin >> x;
	cout <<  ReverseBinary(x);
	cout << endl;
	return 0;
}