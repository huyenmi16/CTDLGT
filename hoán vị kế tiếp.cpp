#include<bits/stdc++.h>

using namespace std;

int main ()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		for(int i=1;i<=n;i++)
		{
			cin>>a[i];
		}
		int j=n-1;
		int tmp=0;
		while(j>0 && a[j]>a[j+1])
		{
			j--;
		}
		if(j>0)
		{
			int k=n;
			while(a[j]>a[k])
			{
				k--;
			}
			int t=a[j];a[j]=a[k];a[k]=t;
			int r=j+1,s=n;
			while(r<=s)
			{
				t=a[r];a[r]=a[s];a[s]=t;
				r++;s--;
			}
		}
		else
		{
			tmp=1;
			
		}
		if(tmp==1)
		{
			for(int i=1;i<=n;i++)
			{
				cout<<i<<" ";
			}
			cout<<endl;
		}
		else
		{
			for(int i=1;i<=n;i++)
			{
				cout<<a[i]<<" ";
			}
			cout<<endl;
		}
	}
}