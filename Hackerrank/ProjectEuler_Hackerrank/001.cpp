// Author: Muhammad Fathir Irhas
// 001 Multiply by 3 and 5
#include <bits/stdc++.h>

using namespace std;

long long DoSomething(long long n, int t)
{
	return (t + (n - 1) / t * t) *((n - 1) / t) / 2;
}

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		long long n;
		cin >> n;
		cout << DoSomething(n, 3) + DoSomething(n, 5) - DoSomething(n, 15) << endl;
	}
	return 0;
}