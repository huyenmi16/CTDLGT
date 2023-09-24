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
		int a[n],b[n];
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
			b[i]=a[i];
		}
		sort(b,b+n);
		int ok=0;
		for(int i=0;i<n;i++)
		{
			if(a[i]!=b[i] && a[n-i-1]!=b[i])
			{
				cout<<"No"<<endl;
				ok=1;
				break;
			}
		}
		if(ok==0) cout<<"Yes"<<endl;
	}
}