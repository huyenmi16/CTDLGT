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
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,k;
		cin>>n>>k;
		int a[k+1];
		int b[k+1];
		long m=0;
		for(int i=1;i<=k;i++)
		{
			cin>>b[i];
			m=m*10+b[i];
		}
		vector<long>v;
		ktao(a,k);
		ok=true;
		while(ok)
		{
			long s=0;
			for(int i=1;i<=k;i++)
			{
				s=s*10+a[i];
			}
			v.push_back(s);
			sinh(a,k,n);
		}
		for(int i=0;i<v.size();i++)
		{
			if(m==v[i])
			{
				cout<<i+1<<endl;
				break;
			}
		}
	}
}