#include<bits/stdc++.h>

using namespace std;

int main ()
{
	int t ;
	cin>>t;
	while(t--)
	{
		int n ;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		int tmp=0;
		for(int i=0;i<n-1;i++)
		{
			for(int j=i+1;j<n;j++)
			{
				if(a[j]==a[i])
				{
					tmp=1;
					cout<<a[i]<<endl;
					break;
				}
			}
			if(tmp==1)
			{
				break;
			}
		}
		if(tmp==0)
		{
			cout<<"NO"<<endl;
		}
	}
}