#include<bits/stdc++.h>

using namespace std;



int main()
{
	int t ;
	cin>>t;
	while(t--)
	{
		int n,k;
		cin>>n>>k;
		int a[k];
		for(int i=1;i<=k;i++)
		{
			cin>>a[i];
		}
//		 135 --> 145, k=3
		int i=k;
		int tmp=0;
//		a[3]=5 --> i=2
		while (i>0 && a[i]==n-k+i)
		{
			i--;
		}
	
		if(i>0)
		{
//			a[2]=3+1=4
			a[i]=a[i]+1;
//			a[3]=4+j-i (ko +1 vi j va i tang nhung cach nhau 1 luong 1)
			for(int j=i+1;j<=k;j++)
			{
				a[j]=a[i]+j-i;
			}
		}
		else
		{
			tmp=1;
		}
		if(tmp==1)
		{
			for(int j=1;j<=k;j++)
			{
				cout<<j<<" ";
			}
			cout<<endl;
		}
		else
		{
			for(int j=1;j<=k;j++)
			{
				cout<<a[j]<<" ";
			}
			cout<<endl;
		}
		
		
	}

}