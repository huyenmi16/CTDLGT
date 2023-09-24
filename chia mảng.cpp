#include<bits/stdc++.h>

using namespace std;

int n,k,sum;
bool ans=0;
vector<int>a;
void Try(int tong,int pos)
{
	if(ans)
	{
		return;
	}
	if(pos==k)
	{
		ans=1;
		return;
	}
	for(int i=0;i<n;i++)
	{
		if(tong==sum)
		{
			Try(0,pos+1);
		}
		else if(tong<sum)
		{
			Try(tong+a[i],pos+1);
		}
		else
		{
			return;
		}
	}
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		
		cin>>n>>k;
		sum=0;
		a.clear();
		a.resize(n);
		ans=0;
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
			sum+=a[i];
		}
		if(sum%k!=0) cout<<0<<endl;
		else
		{
			sum/=k;
			Try(0,0);
			cout<<ans<<endl;
		}
	}
	
}