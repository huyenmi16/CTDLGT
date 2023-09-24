#include<bits/stdc++.h>

using namespace std;
bool ok;
int check(int a[],int n)
{
	int l=1,r=n;
	int dem=0;
	for(int i=1;i<=n/2;i++)
	{
		if(a[l]!=a[r])
		{
			break;
			return 0;
		}
		else
		{
			dem++;
			l++;
			r--;
		}
	}
	if(dem==n/2)
	{
		return 1;
	}
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
	int n;
	cin>>n;
	int a[100];
	ktao(a,n);
	ok=true;
	while(ok)
	{
		if(check(a,n)==1)
		{
			for(int i=1;i<=n;i++)
			{
				cout<<a[i]<<" ";
			}
			cout<<endl;
		}
		sinh(a,n);
	}
	
}