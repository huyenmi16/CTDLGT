#include<iostream>
#include <math.h>


using namespace std;


void check (int n)
{
	for (int i=2;i<=sqrt(n);i++)
	{
		if(n%i==0)
		{
			int dem=0;
			while (n%i==0)
			{
				dem++;
				n=n/i;
			}
			cout<<i<<"("<<dem<<")"<<" ";
		}
		
    }
    if(n!=1)
    {
    	cout<<n<<"("<<1<<")"<<" ";
	}
}




int main()
{
	int t ;
	cin>>t;
	for (int i=1;i<=t;i++)
	{
		int n ;
		cin>>n;
		cout<<"Test"<<" "<<i<<":"<<" ";
		check(n);
		cout<<endl;
	}
}