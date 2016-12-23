// Author: Muhammad Fathir Irhas
// Project Euler 004 Hackerrank
#include <bits/stdc++.h>

using namespace std;

bool isPalindrom(int t)
{	int i=0,arr[100];
	while(t)
	{
		arr[i++]=t%10;
		t=t/10;
	}
	for (int m = 0,j=i-1; m < i/2; m++,j--)
	{
		if(arr[m]!=arr[j])
			return false;
	}
	return true;
}

int main(){
    int t;
    cin>>t;
    
   while(t--)
   {
       int ans=0;
   	int n;
   	cin>>n;
   	for (int i = 100; i < 999; ++i)
   	{ 
   		for (int j = 100; j< 999; ++j)
   		{
   			if(i*j<n&&isPalindrom(i*j)&&ans<i*j)
   				ans=i*j;
                else if(i*j>n)
                    break;
   		}
   		
   	}
        cout<<ans<<endl;
    }  
    return 0;
}