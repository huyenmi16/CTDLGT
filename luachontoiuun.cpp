#include<bits/stdc++.h>
using namespace std;


int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		vector<pair<int,int>>v(n);
		for(int i=0;i<n;i++)
		{
			cin>>v[i].second>>v[i].first;
		}

		sort(v.begin(),v.end());
		int nn=v[0].first;
		int dem=0;
		for(int i=1;i<n;i++)
		{
			if(v[i].second>=nn) 
			{
				nn=v[i].first;
				dem++;
			}
			
		}
		cout<<dem+1<<endl;
		
	}
}