#include<bits/stdc++.h>
using namespace std;


int main ()
{
	int t ;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		
		int dem=0;
		for (int i=2;i<=n/2;i++)
		{
			if(n%i==0 && i%2==0)
			{
				dem++;
			}
		}
		if(n%2==0)
		{
			dem++;
		}
		cout<<dem<<endl;
	}
}

