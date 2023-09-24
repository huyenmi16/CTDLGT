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
		getline(cin,s);
		int z=0;
		for(int i=s.length()-1;i>=0;i--)
		{
			if(s[i]!=' ' && s[i]=='(')
			{
				st.push(s[i]);
				z++;
			}
			if(s[i]!=' ' && s[i]==')')
			{
				st.push(s[i]);
				z++;
			}
		}
//		while(st.size()!=0)
//		{
//			cout<<st.top()<<endl;
//			st.pop();
//		}

//	(()) () 
//	((())(()))
		char x;
		int dem=0;
		int k=0;
		int a[z]={0},j=0;
		while(st.size()!=1)
		{
			x=st.top();
			if(x=='(')
			{
				j++;
				dem++;
				a[j]=dem;
				st.pop();
			}
			else 
			{
				j++;
				st.pop();
			}
		}
		int ok=0;
		for(int i=1;i<=z;i++)
		{
			if(a[i]==0)
			{
				a[i-1]=k;
				a[i]=k;
				k--;
			}
			if(a[i]==1)
			{
				ok=1;
			}
		}
		if(ok==0) a[z]=1;
		for(int i=1;i<=z;i++)
		{
			cout<<a[i]<<" ";
		}
		cout<<endl;
		
	}
}