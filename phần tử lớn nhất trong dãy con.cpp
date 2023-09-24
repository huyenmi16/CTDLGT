#include<bits/stdc++.h>
using namespace std; 
int main()
{ 
	int t; 
	cin >> t; 
	while(t--)
	{ 
		int n ,k;
		cin>> n >> k; 
		int a[n]; 
		for(int i = 0; i < n; i++)
		{ 
			cin >> a[i];
	    } 
		for(int i = 0; i < n -k +1 ; i++)
		{ 
			int max_k = 0; 
			for(int j = 0; j < k; j++)
			{ 
				max_k = max(max_k, a[i+j]);
		    } 
			cout << max_k <<" "; 
		} 
		cout << endl; 
	} 
}