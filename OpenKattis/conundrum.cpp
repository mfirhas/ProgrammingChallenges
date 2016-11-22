#include <iostream>
#include <string>
#include <string.h>

using namespace std;

int CountDays(string s){
	int c = 0;
	string str = s;
	for(int i=0;i<str.length();i+=3){
		for(int j=0;j<3;j++){
			switch(j){
				case 0:
					if(str[i+j] != 'P' && str[i+j] != 'p')
						c++;
						str[i+j] = 'P';
				break;
					
				case 1:
					if(str[i+j] != 'e' && str[i+j] != 'E')
						c++;
						str[i+j] = 'e';
				break;
				
				case 2:
					if(str[i+j] != 'r' && str[i+j] != 'R')
						c++;
						str[i+j] = 'r';
				break;
			}
		}
	}
	return c;
}

int main(){
	string s;
	cin>>s;
	cout<< CountDays(s);
	
	cout<<endl;
	return 0;
}