#include <bits/stdc++.h>

// Author: Muhammad Fathir Irhas - OpenKattis - 10/03/2017

using namespace std;

void foo(int num, string input){
	string adrian = "ABCABCABCABC";
	string bruno  = "BABCBABCBABC";
	string goran  = "CCAABBCCAABB";
	int a = 0;
	int b = 0;
    int g = 0;
	
	for(int i=0;i<num;i++){
		if(input[i] == adrian[i]){ a++;}
		if(input[i] == bruno[i]){ b++;}
		if(input[i] == goran[i]){ g++;}
	}

	int maks = std::max(std::max(a,b),g);
	
	if(maks>0){
		cout << maks << endl;
		a==maks ? cout << "Adrian" << endl : cout<<"";
		b==maks ? cout << "Bruno" << endl : cout<<"";
		g==maks ? cout << "Goran" << endl : cout<<"";
	}
}

int main(){
	int num;
	string input;
	cin >> num;
	cin >> input;
	foo(num,input);

	return 0;	
}
