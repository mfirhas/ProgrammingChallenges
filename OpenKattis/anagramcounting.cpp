#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <string.h>
#include <vector>
#include <algorithm>

using namespace std;

long long anagram(string input){
	long long unique_anagrams = 0; 
    sort(input.begin(), input.end());
    do
        // cout << input << endl;
		unique_anagrams++;
    while(next_permutation(input.begin(), input.end()));
	
	return unique_anagrams;
}

void PrintResult(vector<string> &input){
	for(int i=0;i<input.size() - 1;i++){
		cout<<anagram(input.at(i))<<endl;
	}
}

int main(){
	vector<string> input;
	string i;
	while(!cin.eof()){
		cin>>i;
		input.push_back(i);
	}
	
	PrintResult(input);
	
	cout << endl;
	return 0;
}