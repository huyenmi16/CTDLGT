#include<bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,k,m;
		cin>>n>>k>>m;
		int a[n];
		for(int i=1;i<=n;i++)
		{
			cin>>a[i];
		}
		int sum=0,x=0;
		for(int i=k;i>=1;i--)
		{
			sum+=a[i];
			if(sum<m)
			{
				x=i;
			}
			else if(sum>m)
			{
				x=i;
				break;
			}
			else
			{
				x=i;
				break;
			}
		}
		if( sum>m && sum-a[x]==0) cout<<-1<<endl;
		if(sum<=m) cout<<x<<endl;
		
		
		
	}
}