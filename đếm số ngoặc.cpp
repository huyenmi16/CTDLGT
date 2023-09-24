#include<bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin>>t;
	cin.ignore();
	while(t--)
	{
		stack<char>st;
		string s;
		cin>>s;
		int dem=0;
		for(int i=0;i<s.length();i++)
		{
			if(s[i]!=')') st.push(s[i]);
			else
			{
				if(st.size()==0) 
				{
					st.push('(');
					dem++;
				}
				else
				{
					st.pop();
				}
			}
			
		}
		cout<<dem+st.size()/2<<endl;
		
	}
}