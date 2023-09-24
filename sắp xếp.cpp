#include<bits/stdc++.h>

using namespace std;


void InterchangeSort(int a[],int n)
{
	for(int i=0;i<n-1;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(a[i]>a[j]) swap(a[i],a[j]);
		}
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
		int a[n];
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		InterchangeSort(a,n);
		int l=0,r=n-1;
		for(int i=0;i<n;i++)
		{
			if(i%2==0)
			{
				cout<<a[r]<<" ";
				r--;
			}
			else
			{
				cout<<a[l]<<" ";
				l++;
			}
		}
		cout<<endl;
	}
	
}