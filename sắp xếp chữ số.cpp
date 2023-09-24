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
		string s="",tmp="";
		for(int i=0;i<n ;i++)
		{
			cin>>tmp;
			s=s+tmp;
		}
		sort(s.begin(),s.end());
		for(int i=1;i<s.length();i++)
		{
			if(s[i-1]!=s[i])
			{
				cout<<s[i-1]<<" ";
			}
		}
		cout<<s[s.length()-1];
		cout<<endl;
	}
}