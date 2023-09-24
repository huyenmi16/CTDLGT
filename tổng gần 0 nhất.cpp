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
		long a[n];
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		long tong;
		long min= 1000000;
		for(int i=0;i<n-1;i++)
		{
			for(int j=i+1;j<n;j++)
			{
				if(abs(a[j]+a[i])<min)
				{
					min=abs(a[j]+a[i]);
					tong=a[j]+a[i];
				}
			}
		}
		cout<<tong<<endl;
	}
}