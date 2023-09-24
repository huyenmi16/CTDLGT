#include<iostream>

using namespace std;

int main ()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int x = n%10; 
		int y ;
		while (n!=0)
		{
		    y = n%10;
			n=n/10;
		}
		if(x==y)
		{
			cout<<"YES"<<endl;
		}
		else
		{
			cout<<"NO"<<endl;
		}
	}
}