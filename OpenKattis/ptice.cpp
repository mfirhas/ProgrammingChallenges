#include <bits/stdc++.h>

// Author: Muhammad Fathir Irhas - OpenKattis - 10/03/2017

using namespace std;

void foo(int num, string input){
	string names[] = {"Adrian", "Bruno", "Goran"};
	// char answers[][6] = {{'A','B','C'}, {'B', 'A', 'B', 'C'}, {'C', 'C', 'A', 'A', 'B', 'B'}};
	vector< vector<char> > answers = {
		{'A','B','C'},
		{'B', 'A', 'B', 'C'},
		{'C', 'C', 'A', 'A', 'B', 'B'}
	};
	int scores[3] = {0,0,0};

	for(int i=0;i<input.length();i++){
		for(int j=0;j<3;j++){
			if(input[i] == answers[j][i % answers[j].size()){
				scores[j] += 1;
			}
		}
	}

	std::vector<int> v(scores, scores + sizeof scores / sizeof scores[0]);
	int highest_score = *std::max_element(v.begin(), v.end());
	cout << highest_score << endl;
	(scores[0] == highest_score) ? cout<<"Adrian"<< endl : cout<<"";
	(scores[1] == highest_score) ? cout<<"Bruno"<< endl : cout<<"";
	(scores[2] == highest_score) ? cout<<"Goran"<< endl : cout<<"";

	cout << "Array length " << sizeof(answers[0])/sizeof(answers[0][0]);
	cout << scores[0] << endl;
	cout << scores[1] << endl;
	cout << scores[2] << endl;
	// for(int i=0;i<3;i++){
	// 	if(scores[i] == highest_score){
	// 		cout << names[i] << "\n";
	// 	}
	// }
}

int main(){
	int num;
	string input;
	cin >> num;
	cin >> input;
	foo(num,input);

	return 0;	
}
