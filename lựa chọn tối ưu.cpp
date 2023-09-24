#include<bits/stdc++.h>
using namespace std;

bool sosanh(pair<int,int>a,pair<int,int>b)
{
	return a.second<b.second;
}
int main()
{
	int t ;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int dem=0,k=0;
		vector<pair<int,int>>a(n);
		for(int i=0;i<n;i++)
		{
			cin>>a[i].first>>a[i].second;
		}
		sort(a.begin(),a.end(),sosanh);
		for(int i=0;i<n;i++)
		{
			if(a[i].first>=k)
			{
				k=a[i].second;
				dem++;
			}
		}
		cout<<dem<<endl;
		
		
	}
}