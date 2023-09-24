#include<bits/stdc++.h>
#include<vector>
using namespace std;

void InterchangeSort(int a[],int n)
{
	vector<int>v;
	for(int i=0;i<n-1;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(a[j]<a[i])
			{
				swap(a[j],a[i]);
			}
		}
		for(int i=0;i<n;i++)
		{
			v.push_back(a[i]);
		}
	}
	for(int i=n-1;i>=1;i--)
	{
		cout<<"Buoc "<<i<<": ";
		for(int j=v.size()-n;j<v.size();j++)
		{
			cout<<v[j]<<" ";
			
		}
		v.erase(v.begin() + (v.size()-n), v.begin() + v.size() );
		cout<<endl;
	}
}


int main ()
{
	int t ;
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
	}
	
}