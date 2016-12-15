#include <bits/stdc++.h>

using namespace std;

int main(){
	int x,y;
	cin >> x;
	vector<int> list;
	for(int i=0;i<x;i++){
		cin >> y;
		list.push_back(y);
	}

	for(int j=0;j<x;j++){
		int g;
		if(list[j]%400==0)			 
			g = list[j]/400;
		else
			g = ((list[j]-(list[j]%400))/400)+1;
		cout << g <<endl;
	}

}