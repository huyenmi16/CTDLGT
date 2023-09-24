#include<bits/stdc++.h>

using namespace std;
bool ok;

void ktao(int a[],int n)
{
	for(int i=0;i<n;i++)
	{
		a[i]={0};
	}
}

void sinh(int a[],int n)
{
	int i=n-1;
	while(i>=0 && a[i]==1)
	{
		a[i]=0;
		i--;
	}
	if(i>=0)
	{
		a[i]=1;
	}
	else
	{
		ok=false;
	}
}

int main ()
{
	int t ;
	cin>>t;
	while (t--)
	{
		int n;
		cin>>n;
		int a[n+1];
		ktao(a,n);
		ok=true;
		while(ok)
		{
			string s="";
			for(int i=0;i<n;i++)
			{
				if(a[i]==0)
				{
					s=s+'A';
				}
				else
				{
					s=s+'B';
				}
			}
			cout<<s;
			cout<<"\t";
			sinh(a,n);
		}
		cout<<endl;
	}
	
}