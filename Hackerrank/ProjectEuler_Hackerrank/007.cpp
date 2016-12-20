#include <bits/stdc++.h>

using namespace std;

const int N=1000000;
bool mark[N+100];

int main()
{
    for(int i=2;i<=N/2;++i)
        if(mark[i]==false)
        {
            int b=i+i;
            while(b<=N)
            {
                mark[b]=true;
                b+=i;
            }
        }
    vector<int> primes;
    for(int i=2;i<=N;++i)
        if(mark[i]==false)
            primes.push_back(i);
    int t;
    cin>>t;
    for(int k=1;k<=t;++k)
    {
        int n;
        cin>>n;
        cout<<primes[n-1]<<endl;
    }
    return 0;
}