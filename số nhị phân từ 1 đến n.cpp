#include<bits/stdc++.h>
using namespace std;

string np(int n)
{
	string s;
	while(n>0)
	{
		if(n%2==0)
		{
			s='0'+s;
		}
		else
		{
			s='1'+s;
			n--;
		}
		n/=2;
	}
	return s;
}

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		for(int i=1;i<=n;i++)
		{
			cout<<np(i)<<" ";
		}
		cout<<endl;
	}
}