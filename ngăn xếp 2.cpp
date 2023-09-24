#include<bits/stdc++.h>

using namespace std;

stack<int>s;
string str;
int n;
void show()
{
	if(s.size()==0) cout<<"NONE"<<endl;
	else cout<<s.top()<<endl;
}
int main()
{
	int t;
	cin>>t;
	cin.ignore();
	while(t--)
	{
		cin>>str;
		if(str=="PUSH")
		{
			cin>>n;
			s.push(n);
		}
		else if(str=="POP")
		{
			if(s.size()!=0) s.pop();
		}
		else show();
		
	}
}