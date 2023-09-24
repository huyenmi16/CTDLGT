#include<bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		cin.ignore();
		string s;
		cin>>s;
		stack<char>st;
		for(int i=0;i<s.length();i++)
		{
			 st.push(s[i]);
		}
		string c="";
		string d="";
		while (st.size())
		{
			if(st.top()=='(' ||  st.top()==')')
			{
				st.pop();	
			}
			else if(st.top()=='+') 
			{
				c=c+'+';
				st.pop();
			}
			else if(st.top()=='-')
			{
				c=c+'-';
				st.pop();
			}
			else
			{
				d=d+st.top();
				st.pop();
			}
		}
		reverse(d.begin(),d.end());
		cout<<d;
		cout<<c<<endl;
		
	}
}