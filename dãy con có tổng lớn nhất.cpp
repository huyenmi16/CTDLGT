#include<bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		for(int i=1;i<=n;i++)
		{
			cin>>a[i];
		}
		int sum=0;
		int x=-1e9+7;
		for(int i=1;i<=n;i++)
		{
			sum=0;
			for(int j=i;j<=n;j++)
			{
				sum+=a[j];
				int x = max(sum,x);
			}
		}
		cout<<x<<endl;
	}
	
}