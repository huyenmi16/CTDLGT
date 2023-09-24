#include<bits/stdc++.h>
using namespace std;

vector<int>v;
vector<int>p;
stack<vector<int>>st;
int n;
int a[100];
void in()
{
		p=st.top();
		cout<<"["<<p[0]<<"] ";
		st.pop();
		while (st.size())
	   {
			p = st.top();
			st.pop();
			for (int j = 0; j <p.size(); j++)
			if(j==0)
			{
				cout<<"[";
				cout<<p[j]<<" ";
			}
			else if(j==p.size()-1)
			{
				cout<<p[j]<<"] ";
			}
			else
			{
				cout<<p[j]<<" ";
			}
		}

	
}
void Result()
{
	for(int i=n;i>=1;i--)
	{
		for(int j=0;j<i-1;j++)
		{
			p.push_back(v[j]);
		}
		p.push_back(v[i-1]);
		v.erase(v.begin(),v.begin()+i);
		st.push(p);
		p.clear();
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
		in();
		cout<<endl;
	}
		
}