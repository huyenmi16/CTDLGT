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
		int a[n];
		priority_queue <int, vector<int>,greater<int>>pq;
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
			pq.push(a[i]);
		}
		
		long long p,q,sum=0,tong=0;
		while(pq.size())
		{
			p=pq.top();
			pq.pop();
			q=pq.top();
			pq.pop();
			sum=p+q;
			tong+=sum;
			if(pq.size()==0) break;
			pq.push(sum);
		}
		cout<<tong<<endl;
		
		
	}
}