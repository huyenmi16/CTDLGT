#include<bits/stdc++.h>
using namespace std;

int main ()
{
	int t;
	cin>>t;
	while(t--)
	{
		long n,m;
		cin>>n>>m;
		long a[n],b[m];
		long x=n+m;
		long c[x];
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
			c[i]=a[i];
		}
		for(int j=0;j<m;j++)
		{
			cin>>b[j];
			c[n+j]=b[j];
		}
		sort(c,c+x);
		for(int i=0;i<x;i++)
		{
			cout<<c[i]<<" ";
		}
		cout<<endl;
		
	}
}