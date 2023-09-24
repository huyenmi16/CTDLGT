#include<iostream>
using namespace std;

bool check(int a[],int n)
{
	for(int i=0;i<n/2;i++)
	{
		if(a[i]!=a[n-i-1]) return false ;
	}
	return true;
}


int main ()
{
	int t ;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		for (int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		if(check(a,n)==true)
		{
			cout<<"YES"<<endl;
		}
		else
		{
			cout<<"NO"<<endl;
		}
		
	}
}