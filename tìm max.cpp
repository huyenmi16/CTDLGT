#include<bits/stdc++.h>

using namespace std;
int convert(string &s)
{
	int res=0;
	for(int i=0;i<s.length();i++)
	{
		res=res*10+s[i]-48;
	}
	return res;
}
int main()
{
	string a,b;
	cin>>a>>b;
	for(int i=0;i<a.length();i++)
	{
		if(a[i]=='6') a[i]='5';
	}
	for(int i=0;i<b.length();i++)
	{
		if(a[i]=='6') a[i]='5';
	}
	cout<<convert(a)+convert(b)<<" ";
	for(int i=0;i<a.length();i++)
	{
		if(a[i]=='5') a[i]='6';
	}
	for(int i=0;i<a.length();i++)
	{
		if(a[i]=='5') a[i]='6';
	}
	cout<<convert(a)+convert(b)<<endl;
}