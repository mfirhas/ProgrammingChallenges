#include <bits/stdc++.h>

using namespace std;

int main(){
	int i,a,b;
	int import;
	cin >> i;
	while(i--){
		import = 0;
		cin >> a;
		while(cin >> b && b!=0){
			if(b > (2*a))
				import += (b-(2*a));
			a=b;
		}
		cout << import <<endl;
	}
}
