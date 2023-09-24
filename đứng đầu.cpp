#include<bits/stdc++.h>

using namespace std;
vector<string>v;
int main()
{
	int n;
	cin>>n;
	cin.ignore();
	string s;
	for(int i=0;i<n;i++)
	{
		cin>>s;
		v.push_back(s);
	}
	string ss;
	cin>>ss;
	sort(v.begin(),v.end());
	for(int i=0;i<v.size();i++)
	{
		cout<<v[i]<<" ";
	}
}