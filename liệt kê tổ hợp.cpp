#include<bits/stdc++.h>

using namespace std;

set<int>se;
vector<int>v;
int n, b[22], k; 
void in()
{ 
	for(int i=1; i<=k; i++)
	{
		cout << v[b[i]-1] << " ";
	} 
	cout << endl; 
} 
void Try(int i)
{ 
	for(int j=b[i-1]+1; j<=se.size()-k+i; j++)
	{ 
		b[i] = j; 
		if(i == k){ in(); } 
		else{ Try(i+1); } 
	} 
}
int main ()
{

		cin>>n>>k;
		int a[n];
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
			se.insert(a[i]);
		}
		for(auto x:se)
		{
			v.push_back(x);
		}
		sort(v.begin(),v.end());
		b[0] = 0; 
		Try(1);
		
		
	
}