#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <cmath>

using namespace std;

int main(){
	int req = 1;
	double par = 0.0;
	double p2 = 2.0*(pow(2.0,-5.0/4)+pow(2.0,-3.0/4));
	double p1 = sqrt(2)*p2;

	int n,x; cin >> n;

	for (int i=2;i<=n && req>0;i++){
		 req *= 2;
		 cin >> x;
		 if (x >= req) {
			  par += req*p2;
			  req = 0;
		 }
		 else {
			  req -= x;
			  par += x*p2;
		 }
		 p2 /= sqrt(2);
	}

	double answer = (par - p1)/2.0;
	if (req == 0.0){
		printf("%.10f\n",answer);
	} else {
		cout << "impossible" << endl;
	}
	return 0;
}
