#include <bits/stdc++.h>

using namespace std;

int main(){
	string input;

	map<string, int> x_table;
	map<int, string> y_table;

	while(cin >> input){
		if(input.compare("def") == 0){
			string x;
			int y;
			cin >> x >> y;
			if(x_table.find(x) != x_table.end()){
				int x_value = x_table[x];
				x_table.erase(x); //erase previous input x(variable)
				y_table.erase(x_value); //erase previous input y(num)
			}
			x_table[x] = y;
			y_table[y] = x;
		}else if(input.compare("calc") == 0){
			string line, var;
			char c;
			int sum = 0;
			int mult = 1;
			string ans = "";

			getline(cin, line);
			istringstream iss(line.substr(1));

			while(iss >> var){
				 if(x_table.find(var) == x_table.end()){
					  ans = "unknown";
					  break;
				 } else {
					  sum += mult*x_table[var];
				 }
				 iss >> c;
				 if(c == '+'){
					  mult = 1;
				 } else if(c == '-'){
					  mult = -1;
				 } else { //=
					  if(y_table.find(sum) != y_table.end()){
							ans = y_table[sum];
					  } else {
							ans = "unknown";
					  }
					  break;
				 }
			}
			cout << line.substr(1) << " " << ans << endl;
		}else if(input.compare("clear") == 0){
			x_table.clear();
			y_table.clear();
		}
	}
	return 0;
}
