#include <bits/stdc++.h>

using namespace std;

int main(){
	int score = 0;
	int solved = 0;
	string name;
	string verdict;
	int t;
	map<string, int> m;
	while(t != -1){
		cin >> t;
		if(t==-1)
			break;

		cin >> name >> verdict;
		if(verdict.compare("wrong") == 0){
			m[name] += 20;
		}else{
			score += t;
			score += m[name];
			solved++;
		}
	}
	cout << solved << " " << score << endl;
	return 0;
}
