#include<bits/stdc++.h>

using namespace std;
bool ok;
int check(int a[],int n)
{
	int dem=0;
	for(int i=0;i<n;i++)
	{
		if(a[i]!=a[n-i-1])
		{
			dem++;
		}
		
	}
	if(dem==0) return 1;
	else return 0;

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
	int n;
	cin>>n;
	int a[n+1];
	ktao(a,n);
	ok=true;
	while(ok)
	{
		if(check(a,n)==1)
		{
			for(int i=0;i<n;i++)
			{
				cout<<a[i]<<" ";
			}
			cout<<endl;
		}
		sinh(a,n);
	}
	
}