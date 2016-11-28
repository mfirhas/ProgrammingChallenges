#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

using namespace std;

long long MaxValue(long long *p, long long m){
	long long temp = 0;

    for(int i=0;i<5;i++)
    {
        if(p[i]>temp)
        temp=p[i];
    }

    return temp;
}

int main(){
	long long n = 600851475143ULL;
	long long prime_factors[n];
	long long m = 0;
	for(int i=0;i<n;i++){
		if(n%i == 0){
			prime_factors[m] = i;
			m++;
		}
	}

	long long *p = &prime_factors[0];
	long long max = MaxValue(p,m);
	cout<<max;
	return 0;
}