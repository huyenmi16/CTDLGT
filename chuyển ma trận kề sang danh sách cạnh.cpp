#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n,x;
	cin>>n;
	vector<vector<int>>a(n+1);
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			cin>>x;
			if(x==1 && i>j)
			{
				a[i].push_back(j);
				a[j].push_back(i);
			}
		}
	}
	for(int i=1;i<=n;i++)
	{
		for(auto j:a[i])
		{
			cout<<j<<" ";
		}
		cout<<endl;
	}
}