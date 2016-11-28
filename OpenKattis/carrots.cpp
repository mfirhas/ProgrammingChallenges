#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

using namespace std;

int main(){
	int number_of_contestant, problem_solved;
	string description;
	cin >> number_of_contestant >> problem_solved;
	for(int i=0;i<number_of_contestant;i++){
		cin>>description;
	}

	cout<<problem_solved;
}