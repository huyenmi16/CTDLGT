#include <bits/stdc++.h>

using namespace std; 

int main() 
{ 
	int n; 
	cin>>n; 
	int a[10001]; 
	for(int i=1;i<=n;i++)
	{ 
		cin>>a[i];
	} 
	sort(a,a+n+1); 
	bool ok=true; 
	while(ok)
	{
	 	for(int i=1;i<=n;i++)
		{
			cout<<a[i]; cout<<" ";
	    }
		cout<<endl; 
		int j=n-1; 
		while(j>0&&a[j]>a[j+1]) j--; 
        if(j>0)
		{ 
			int k=n; 
			while(a[j]>a[k])k--; 
			int t=a[j];a[j]=a[k];a[k]=t; 
			int r=j+1,s=n; 
			while(r<=s)
			{ 
				t=a[r];a[r]=a[s];a[s]=t; r++;s--; 
			} 
		} 
		else ok=false; 
	}
}