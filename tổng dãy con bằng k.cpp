#include<bits/stdc++.h>

using namespace std;

bool ok;
int dem=0;
void check (int a[],int n,int k,int b[])
{
	int sum=0;
	for(int i=1;i<=n;i++)
	{
		if(b[i]==1)
		{
			sum=sum+a[i];
		}
	}
	if(sum==k)
	{
		for(int i=1;i<=n;i++)
		{
			if(b[i]==1)
			{
				cout<<a[i]<<" ";
			}
		}
		dem++;
	}
	cout<<endl;
}
void ktao(int a[],int n)
{
	for(int i=1;i<=n;i++)
	{
		a[i]={0};
	}
}

void sinh(int a[],int n)
{
	int i=n;
	while(i>=1 && a[i]==1)
	{
		a[i]=0;
		i--;
	}
	if(i>=1)
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
	int n,k;
	cin>>n>>k;
	int a[n+1];
	int b[n+1];
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	ktao(b,n);
	ok=true;
	while(ok)
	{
		check(a,n,k,b);
		sinh(b,n);
	}
	cout<<dem<<endl;
}