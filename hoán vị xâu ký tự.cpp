#include<bits/stdc++.h>

using namespace std;

int a[20],check[20]={};
void in(int n)
{
	for(int i=1;i<=n;i++)
	{
		cout<<char(a[i]+'@');
	}
	cout<<" ";
}
void Try(int i,int n)
{
	for(int j=1;j<=n;j++)
	{
		if(check[j]==0)
		{
			check[j]=1;
			a[i]=j;
			if(i==n) in(n);
			else Try(i+1,n);
			check[j]=0;
		}
	}
}
int main()
{
	int t ;
	cin>>t;
	while(t--)
	{
		cin.ignore();
		string s;
		cin>>s;
		int n = s.size();
		Try(1,n);
		cout<<endl;
	}
}