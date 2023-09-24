#include<bits/stdc++.h>
//	aah ,hah, aha
using namespace std;
bool ok;
vector<string>v;
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
					s=s+'8';
				}
				else
				{
					s=s+'6';
				}
			}
			if(s.front()=='8' && s.back()=='6' && s.find("88")==-1 && s.find("6666")==-1)
			{
				v.push_back(s);
			}
//			 check dieu kien
//			sinh xau
			sinh(a,n);
		}
		sort(v.begin(), v.end());
    	for (string i : v) 
		{
       	 	cout << i << endl;
   		}
		
	
}