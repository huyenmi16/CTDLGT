#include<bits/stdc++.h>

using namespace std;

void chuanhoa1(string &s)
{
	s[0]=toupper(s[0]);
	for (int i=1;i<s.length();i++)
	{
		s[i]=tolower(s[i]);
	}
}
void chuanhoa2(string &a)
{
	
	for (int i=0;i<a.length();i++)
	{
		a[i]=toupper(a[i]);
	}
}


int main()
{
	int t;
	cin>>t;
	cin.ignore();
	while(t--)
	{
		string s;
		getline(cin,s);
		vector<string> v;
		stringstream ss(s);
		string tmp;
	
		while(ss>>tmp)
		{
			v.push_back(tmp);
		}
		for (int i=0;i<v.size();i++)
		{
			if(i==0)
			{
				chuanhoa2(v[0]);
			}
			else
			{
				chuanhoa1(v[i]);
				if(i==v.size()-1)
				{
				cout<<v[i];
				}
				else
				{
				cout<<v[i]<<" ";
				}
			}
			
		}
		cout<<","<<" "<<v[0]<<endl;
		
	}
}