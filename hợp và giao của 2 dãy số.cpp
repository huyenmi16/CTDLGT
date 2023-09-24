#include<bits/stdc++.h>

// in chi so
using namespace std;

int main ()
{
	int t ;
	cin>>t;
	while(t--)
	{
		int n,m;
		cin>>n>>m;
		int a[n],b[m];
		int c[100005]={0},d[100005]={0};// gia tri tro thanh chi so 
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
			c[a[i]]=1; // mang danh dau 
		
		}
		for(int i=0;i<m;i++)
		{
			cin>>b[i];
			d[b[i]]=1;
		}
		for(int i=0;i<100000;i++)
		{
			if(c[i]==1 || d[i]==1)
			{
				cout<<i<<" ";
			}
		}
		cout<<endl;
		for(int i=0;i<100000;i++)
		{
			if(c[i]==1 && d[i]==1)
			{
				cout<<i<<" ";
			}
		}
		cout<<endl;
	}
	
	
}