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
		int res=-1;
		for(int i=1;i<=n;i++)
		{
			cin>>a[i];
			if(res<=k) res=i;
		}
		if(res==-1) cout<<-1<<endl;
		else cout<<res<<endl;
	
	}
}