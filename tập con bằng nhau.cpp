#include<bits/stdc++.h>
using namespace std;
string s;
int n,sum,tong;
int a[105];
void Try(int pos, int sum)
{
	if(s=="YES")
	{
		return ;
	}
	if(2*sum==tong)
	{
		s="YES";
		return;
	}
	if(pos<n)
	{
		if(2*(sum+a[pos])<=tong)
		{
			Try(pos+1,sum+a[pos]);
		}
		Try(pos+1,sum);
	}
	
	
}

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		
		cin>>n;
		tong=0;
		for (int i=1;i<=n;i++)
		{
			cin>>a[i];
			tong+=a[i];
		}
		s="NO";
		if(tong%2==0)
		{
			Try(0,0);
		}
		cout<<s<<endl;
	}
}