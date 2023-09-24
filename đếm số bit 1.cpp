#include<bits/stdc++.h>

using namespace std;
long long bit01(long long pos, long long n ,long long ctr)
{
	if(pos&1) return 1;
	if(pos==ctr) return n%2;
	if(pos > ctr) return bit01(pos-ctr,n/2,ctr/2);
	return bit01(pos,n/2,ctr/2);
}

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,l,r;
		cin>>n>>l>>r;
		long long ctr=pow(2,(long long) log2(n)),ans=0;
		for(int i=l;i<=r;i++)
		{
			ans+=bit01(i,n,ctr);
		}
		cout<<ans<<endl;
	}
}