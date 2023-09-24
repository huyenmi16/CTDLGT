#include<bits/stdc++.h>

using namespace std;
bool check(string &s)
{
	for(int i=0;i<s.length();i++)
	{
		if(s[i]!='0')
		{
			return false;
		}
	}
	return true;
	
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		cin.ignore();
		string s;
		cin>>s;
		int tmp=0;
		int i=s.length()-1;
		while(i>=0 && s[i]=='0')
		{
			s[i]='1';
			i--;
		}
		if(i>=0)
		{
			s[i]='0';
		}
		if(check(s)==true)
		{
			for(int i=0;i<s.length();i++)
			{
				s[i]='1';
				cout<<s[i];
			}
			cout<<endl;
		}
		else
		{
			cout<<s<<endl;
		}
		
	}
}