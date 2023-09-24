#include<bits/stdc++.h>

using namespace std;

void SelectionSort (int a[],int n)
{
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
		cout<<"Buoc "<<i+1<<": ";
		for(int i=0;i<n;i++)
		{
			cout<<a[i]<<" ";
		}
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