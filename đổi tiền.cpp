#include<bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		int a[]={1,2,5,10,20,50,100,200,500,1000};
		int sum=0;
		cin>>n;
		int dem=0;
		for(int i=9;i>=0;i--)
		{
			sum+=a[i];
			if(sum<n) dem++;
			else if (sum>n) sum-=a[i];
			else
			{
			 	 cout<<dem+1<<endl;
			 	 break;
			}
		}
	}
}