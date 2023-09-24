#include<bits/stdc++.h>

using namespace std;

const int mod=123456789;
long long n,k;
long long demday(long long n,long long k)
{
	if(k==0) return 1;
	if(k==1) return n%mod;
	long long x= demday(n,k/2);
	if(k%2==0) return x*x%mod;
	else return x*x%mod*n%mod;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		cin>>n;
		if(n==1) cout<<1<<endl;
		cout<<demday(2,n-1)<<endl;
	}
}