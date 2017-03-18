#include <bits/stdc++.h>

// Author: Muhammad Fathir Irhas - OpenKattis - 10/03/2017

using namespace std;

void foo(int num, string input){
	string names = {"Adrian", "Bruno", "Goran"};
	char answers[][] = {{'A','B','C'}, {'B', 'A', 'B', 'C'}, {'C', 'C', 'A', 'A', 'B', 'B'}};
	int scores[3] = {0,0,0};

	for(int i=0;i<input.length();i++){
		for(int j=0;j<3;j++){
			if(input[i] == answers[j][i % (sizeof(answers[j])/sizeof(answers[j][0]))]){
				scores[j] += 1;
			}
		}
	}

	int highest_score = *std::max_element(scores);
	cout << highest_score << endl;
	for(int i=0;i<3;i++){
		if(scores[i] == highest_score){
			cout << names[i] << endl;
		}
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
