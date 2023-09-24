#include<bits/stdc++.h>
using namespace std;

int partition(int a[],int l, int r)
{
	int pivot = a[r];	// gan chot cho phan tu cuoi cua day 
	int i=l-1;// i=-1
	for(int j=l;j<r;j++) 
	{
		if(a[j]<=pivot)
		{
			i++;
			swap(a[i],a[j]);
			
		}
	}
//	dua chot ve giua 
	++i;
	swap(a[i],a[r]);
	return i;
	
}

void QuickSort(int a[],int l,int r)
{
	if(l>=r) return;
	int p = partition(a,l,r);
	QuickSort(a,l,p-1);
	QuickSort(a,p+1,r);
}

int main ()
{
	int n ;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	QuickSort(a,0,n-1);
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
	return 0;
}