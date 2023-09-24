#include<bits/stdc++.h>
using namespace std;

vector<int>v;
int n;
int a[100];
void Result()
{
	for(int i=n;i>=1;i--)
	{
		cout<<"[";
		for(int j=0;j<i-1;j++)
		{
			cout<<v[j]<<" ";
		}
		cout<<v[i-1]<<"]";
		v.erase(v.begin(),v.begin()+i);
		cout<<endl;
	}
}
void Try(int i,int k)
{
	for(int j=1;j<k;j++)
	{
		a[j-1]=a[j]+a[j-1];
		v.push_back(a[j-1]);
	}
	if(i==n)
	{
		Result();
	}
	else
	{
		Try(i+1,k-1);
	}
}
int main()
{
	int t ;
	cin>>t;
	while(t--)
	{
		cin>>n;
		int k=n;
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
			v.push_back(a[i]);
		}
		Try(1,k);
	}
		
}