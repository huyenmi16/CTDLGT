#include<bits/stdc++.h>
//	aah ,hah, aha
using namespace std;
bool ok;
bool check1(string &s)
{
	if(s[0]=='H' && s[s.length()-1]=='A')
	{
		return true;
	}
	return false;

}
bool check2(string &s)
{
	for(int i=1;i<s.length();i++)
	{
		if(s[i]=='H' && s[i]==s[i-1])
		{
			return false;
		}
	}
	return true;
}


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
//			chuyen doi sang xau 
			string s="";
			for(int i=0;i<n;i++)
			{
				if(a[i]==1)
				{
					s=s+'H';
				}
				else
				{
					s=s+'A';
				}
			}
			if(check1(s)==true && check2(s)==true)
			{
				cout<<s<<endl;
			}
//			 check dieu kien
//			sinh xau
			sinh(a,n);
		}
		cout<<endl;
		
	}
	
}