#include<bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,k;
		cin>>n>>k;
		int a[n];
		for(int i=0;i<n;i++) cin>>a[i];
		sort(a,a+n);
		int sum=0,tong=0;
		int x=n-k;
		if (k>x)
		{
			for(int i=0;i<x;i++)
			{
				sum+=a[i];
			}
			for(int i=x;i<n;i++)
			{
				tong+=a[i];
			}
			cout<<tong-sum<<endl;
		}
		else
		{
			for(int i=0;i<k;i++)
			{
				sum+=a[i];
			}
			for(int i=k;i<n;i++)
			{
				tong+=a[i];
			}
			cout<<tong-sum<<endl;
		}
	}
}