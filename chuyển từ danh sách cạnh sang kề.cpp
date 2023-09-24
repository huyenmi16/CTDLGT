#include<bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int v,e;
		cin>>v>>e;
		int u,v;
		vector<vector<int>>a(v+1);
		for(int i=0;i<e;i++)
		{
			cin>>u>>v;
			a[u].push(v);
			a[v].push(u);
		}
		for(int i=0;i<a.size();i++)
		{
			cout<<i<<": ";
			for(int j=0;j<a[i].size();j++)
			{
				cout<<a[i][j]<<" ";
			}
			cout<<endl;
		}
	}
	
}