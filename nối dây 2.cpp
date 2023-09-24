#include<bits/stdc++.h>

using namespace std;

const int mod = 1e9+7;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long n;
		cin>>n;
		long long a[n];
		priority_queue<long long,vector<long long>,greater<long long>>ab;
		for(long long i=0;i<n;i++)
		{
			cin>>a[i];
			ab.push(a[i]);
		}
		long long p,q,sum=0,tong=0;
		while(ab.size())
		{
			p=ab.top();
			ab.pop();
			q=ab.top();
			ab.pop();
			sum=(p+q)%mod;
			tong=(tong+sum)%mod;
			if(ab.size()==0) break;
			ab.push(sum);
		}
		cout<<tong<<endl;
	}
}