#include<bits/stdc++.h>
using namespace std; 
	set<int> st; 
	vector<int> v; 
	int x[100], k; 
	void in()
	{ 
		for(int i=1; i<=k; i++)
		{
			 cout << char(v[x[i]-1]);
		} 
		cout << endl; 
	} 
	void Try(int i)
	{ 
		for(int j=x[i-1]+1; j<=st.size()-k+i; j++)
		{ 
			x[i] = j; 
			if(i == k){ in(); } 
			else{ Try(i+1); } 
		} 
	}
 main()
 { 
 	
    char s;
    cin>>s;
    cin>>k;
	for(int i=65;i<=int(s);i++)
	{
		st.insert(i);
	}
	for(auto x:st)
	{ 
		v.push_back(x); 
	} 
	x[0] = 0; 
	Try(1);
 }