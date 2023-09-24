#include<bits/stdc++.h>

using namespace std;



int main ()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,k;
		cin>>n>>k;
		int a[k+1];
		set<int>se;
		for(int i=1;i<=k;i++)
		{
			cin>>a[i];
			se.insert(a[i]);	
		}
		int ok=true;
		int i=k;
		while(i>0 && a[i]==n-k+i)
		{
			i--;
		}
		if(i>0)
		{
			a[i]=a[i]+1;
			for(int j=i+1;j<=k;j++)
			{
				a[j]=a[i]+j-i;
			}
		}
		else
		{
			ok=false;
		}
		
		if(ok==false)
		{
			cout<<k<<endl;
		}
		else
		{
			for(int i=1;i<=k;i++)
			{
				se.insert(a[i]);
			}
			cout<<se.size()-k<<endl;
		}
		se.clear();
		
	}
	
}