#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	cin>>n;
	cin.ignore();
	string s;
	set<pair<int,int>>m;
	int k=0;
	for(int i=0;i<n;i++)
	{
		getline(cin,s);
		s+=" ";
		for(int j=0;j<s.size();j++)
		{
			if(s[j]>='0' && s[j]<='9')
			{
				k=k*10+s[j]-'0';
			}
			else
			{
				int a=i+1 , b=k;
				if(a>b) swap(a,b);
				m.insert(make_pair(a,b));
				k=0;
			}
		}
	}
	int a[n+1][n+1]={0};
	for(auto i: m)
	{
		a[i.first][i.second]=1;
		a[i.second][i.first]=1;
	}
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
	
	
}