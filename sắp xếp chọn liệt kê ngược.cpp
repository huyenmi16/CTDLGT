#include<bits/stdc++.h>
#include<vector>

using namespace std;

void SelectionSort (int a[],int n)
{
	vector<int>v;
	int min_dx;
	for(int i=0;i<n-1;i++)
	{
		min_dx=i;
		for(int j=i+1;j<n;j++)
		{
			if(a[min_dx]>a[j])
			{
				min_dx=j;
			}
		}
		if(i!=min_dx)
		{
			swap(a[i],a[min_dx]);
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
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	SelectionSort ( a, n);
	
}