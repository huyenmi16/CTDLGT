#include<bits/stdc++.h>
using namespace std;
bool ok;
void ktao(int a[],int n)
{
	for(int i=1;i<=n;i++)
	{
		a[i]=i;
	}
}
void sinh(int a[],int n)
{
	int i=n-1;
	while(i>0 && a[i]>a[i+1])
	{
		i--;
	}
	if(i>0)
	{
		int k=n;
		while(a[i]>a[k])
		{
			k--;
		}
		int t = a[i];a[i]=a[k];a[k]=t;
		int r=i+1,s=n;
		while(r<=s)
		{
			t=a[r];a[r]=a[s];a[s]=t;
			r++;
			s--;
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
		int n;
		cin>>n;
		int a[n+1];
		ktao(a,n);
		ok=true;
		vector<long>v;
		while(ok)
		{
			long sum=0;
			for(int i=1;i<=n;i++)
			{
				sum=sum*10+a[i];
			}
			v.push_back(sum);
			sinh(a,n);
		}
		for(int j=0;j<v.size();j++)
		{
			cout<<v[j]<<"\t";
		}
		cout<<endl;
	}
}