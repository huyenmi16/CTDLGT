#include<bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		for (int i=0;i<n;i++) cin>>a[i];
		sort(a,a+n);
		int dem=n,l=n/2-1,r=n-1;
		while(l>=0 && r>=n/2)
		{
			if(2*a[l]<=a[r])
			{
				l--;
				r--;
				dem--;
				
			}
			else{
				l--;
			}
			
		}
		cout<<dem<<endl;
	}
}