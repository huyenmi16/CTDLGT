#include<bits/stdc++.h>

using namespace std;
int main ()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,m;
		cin>>n>>m;
		int a[n];
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		int temp=-1;
		for(int i=0;i<n;i++)
		{
			if(a[i]==m)
			{
				temp=1;
			}
		}
		cout<<temp<<endl;
		
	}
}