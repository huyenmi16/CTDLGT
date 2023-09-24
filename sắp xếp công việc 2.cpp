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
		int x,d=0,dem=0;
		int check[n+1]={};
		vector<pair<int,int>>a(n+1);
		for(int i=1;i<=n;i++)
		{
			cin>>x>>a[i].second>>a[i].first;
		}
		sort(a.begin()+1,a.end(),greater<pair<int,int>>());
		for(int i=1;i<=n;i++)
		{
			for(int j=min(n,a[i].second);j>=1;j--)
			{
				if(!check[j])
				{
					dem+=a[i].first;
					d++;
					check[j]=1;
					break;
				}
			}

		}
		cout<<d<<" "<<dem<<endl;
	}
}