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
		int a[n],b[100005]={0};
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
			b[a[i]]++;
		}
		for(int i=0;i<100000;i++)
		{
			if(b[i]!=0)
			{
				for(int j=0;j<b[i];j++)
				{
					cout<<i<<" ";
				}
			}
		}
		cout<<endl;
	}	
}