#include<bits/stdc++.h>

using namespace std;
long long n,k;
long long gapdoi(long long  n,long long k)
{
	if(k==1) return 1;
	if(k==pow(2,n)) return n+1;
	if(k<=pow(2,n)) return (n-1,k);
	return gapdoi(n-1,k-pow(2,n));
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		cin>>n>>k;
		cout<<gapdoi(n-1,k)<<endl;
	}
	
}