#include<bits/stdc++.h>

using namespace std;

vector<long long>v;

void pt(long long n)
{
	while(n!=0)
	{
		v.push_back(n%10);
		n=n/10;
	}
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		long long a[n];
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
			pt(a[i]);
		}
		sort(v.begin(),v.end());
		for(int i=0;i<v.size()-1;i++)
		{
			for(int j=i+1;j<v.size();j++)
			{
				if(v[j]==v[i])
				{
					v[j]=0;
				}
				else
				{
					break;
				}
			}
		}
		int dem=0;
		for(int i=v.size()-1;i>=0;i--)
		{
			if(v[i]!=0 && v[i]%2!=0)
			{
				cout<<v[i]<<" ";
				dem++;
			}
		}
		if(dem==0) cout<<-1;
		v.clear();
		cout<<endl;
		
	}
}