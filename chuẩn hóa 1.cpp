#include<bits/stdc++.h>

using namespace std;

void chuanhoa(string &s)
{
	s[0]=toupper(s[0]);
	for (int i=1;i<s.length();i++)
	{
		s[i]=tolower(s[i]);
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
			chuanhoa(v[i]);
			cout<<v[i]<<" ";
		}
		cout<<endl;
	}
}