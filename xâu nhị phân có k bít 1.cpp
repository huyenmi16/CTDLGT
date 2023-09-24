#include<bits/stdc++.h>

using namespace std;
bool ok;

void check (int a[],int n,int k)
{
	int dem=0;
	for(int i=0;i<n;i++)
	{
		if(a[i]==1)
		{
			dem++;
		}
	}
	if(dem==k)
	{
		for(int i=0;i<n;i++)
		{
			cout<<a[i];
		}
	}
}
void ktao(int a[],int n)
{
	for(int i=0;i<n;i++)
	{
		a[i]={0};
	}
}

void sinh(int a[],int n)
{
	int i=n-1;
	while(i>=0 && a[i]==1)
	{
		a[i]=0;
		i--;
	}
	if(i>=0)
	{
		a[i]=1;
	}
	else
	{
		ok=false;
	}
}

int main ()
{
	int t ;
	cin>>t;
	while (t--)
	{
		int n,k;
		cin>>n>>k;
		int a[n+1];
		ktao(a,n);
		ok=true;
		while(ok)
		{
			check(a,n,k);
			cout<<endl;
			
			sinh(a,n);
		}
		
	}
	
}