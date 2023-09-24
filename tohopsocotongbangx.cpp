#include<bits/stdc++.h>

using namespace std;

int n,s;
int a[30],b[30];
int sum,ok;
void in (int x)
{
	cout<<"[";
	for(int i=1;i<x-1;i++)
	{
		cout<<b[i]<<" ";
	}
	cout<<b[x-1]<<"] ";
}
void Try(int i,int sum,int cur)
{
	if(sum==s) {
		in(i);
		ok=1;
	}
	for(int j=cur;j<=n;j++)
	{
		b[i]=a[j];
		sum+=b[i];
		if(sum<=s)
		{
			Try(i+1,sum,j);
		}
		sum-=a[j];
	}
}
int main()
{
	cin>>n>>s;
	ok=0;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	sort(a+1,a+n+1);
	Try(1,0,1);
	if(ok==0) cout<<-1;
	cout<<endl;
		
}