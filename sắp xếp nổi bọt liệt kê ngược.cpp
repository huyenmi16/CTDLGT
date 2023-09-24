#include<bits/stdc++.h>
#include<vector>;
using namespace std;

void BubbleSort(int a[],int n)
{
	vector<int>v;
	int tmp,dem=0;
	for(int i=0;i<n-1;i++)
	{
		tmp=0;
		for(int j=0;j<n-i-1;j++)
		{
			if(a[j]>a[j+1])
			{
				tmp=1;
				swap(a[j],a[j+1]);
			}
		}
		if(tmp==1)
		{
			dem++;
			for(int i=0;i<n;i++)
			{
				v.push_back(a[i]);
			}
			cout<<endl;
		}
		else
		{
			break;
		}
		
		
	}
	
	for(int i=dem;i>=1;i--)
    {
		cout<<"Buoc "<<i<<": ";
		for(int j=v.size()-n;j<v.size();j++)
		{
			cout<<v[j]<<" ";
				
		}
			
		v.erase(v.begin() + (v.size()-n), v.begin() + v.size() );
		cout<<endl;
			
    }
	
    	
    	
}

int main()
{
	int t ;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		BubbleSort(a,n);
		cout<<endl;
	}
	
}