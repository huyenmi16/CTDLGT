#include<bits/stdc++.h>

using namespace std;

bool ok;
void ktao(int a[],int k)
{
	for(int i=1;i<=k;i++)
	{
		a[i]=i;
	}
}
void sinh(int a[],int k,int n)
{
	int i=k;
	while(i>0 && a[i]==n-k+i)
	{
		i--;
	}
	if(i>0)
	{
		a[i]=a[i]+1;
		for(int j=i+1;j<=k;j++)
		{
			a[j]=a[i]+j-i;
		}
	}
	else
	{
		ok=false;
	}
	
}
int main ()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,k;
		cin>>n>>k;
		int a[k+1];
		ok=true;
		ktao(a,k);
		while(ok)
		{
			for(int i=1;i<=k;i++)
			{
				cout<<a[i];
			}
			cout<<"\t";
			sinh(a,k,n);
			
		}
		cout<<endl;
		
	}
	
}