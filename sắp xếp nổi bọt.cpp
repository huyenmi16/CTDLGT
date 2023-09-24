#include<bits/stdc++.h>
using namespace std;

void BubbleSort(int a[],int n)
{
	int tmp;
	for(int i=0;i<n-1;i++)
	{
		tmp=0;
		for(int j=0;j<n-i-1;j++)
		{
			if(a[j]>a[j+1])
			{
				tmp=1;
				swap(a[j],a[j+1]);
			}
		}
		if(tmp==1)
		{
			cout<<"Buoc "<<i+1<<": ";
			for(int i=0;i<n;i++)
			{
				cout<<a[i]<<" ";
			}
			cout<<endl;
		}
		else
		{
			break;
		}
		
	}
}

int main()
{
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	BubbleSort(a,n);
	
}