#include <iostream>

using namespace std;

void PrintResult(int *n, int *m){
	if(*n == *m){
		cout<< *n + 1;
	}else if(*n < *m){
		for(int i=*n + 1; i<= *m+1; i++){
			cout<<i<<endl;
		}
	}else{
		for(int i=*m + 1; i<= *n+1; i++){
			cout<<i<<endl;
		}
	}	
}

int main(){
	int n,m;
	cin>>n>>m;
	PrintResult(&n,&m);
	
	cout<<endl;
	return 0;
}