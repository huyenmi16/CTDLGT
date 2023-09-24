#include<bits/stdc++.h>
#include<vector>
using namespace std;

void InsertionSort(int a[],int n)
{
	vector<int>v;
	int j,i,key;
	v.push_back(a[0]);
	for(i=1;i<n;i++)
	{
		key= a[i];
		j=i-1;
		while(j>=0 && a[j]>key)
		{
			a[j+1]=a[j];
			j=j-1;
		}
		a[j+1]=key;
		
		for(int k=0;k<=i;k++)
		{
			v.push_back(a[k]);
		}
		
	}
	int z=0;
	for(int i=n-1;i>=0;i--)
	{
		cout<<"Buoc "<<i<<": ";
		for(int j=v.size()-n+z;j<v.size();j++)
		{
			cout<<v[j]<<" ";
			
		}
		v.erase(v.begin() + (v.size()-n+z), v.begin() + v.size() );
		cout<<endl;
		z++;
	}
}
int main ()
{
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	InsertionSort(a,n);
}