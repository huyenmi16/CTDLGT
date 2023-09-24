#include<iostream>

using namespace std;

int main ()
{
	int t ;
	cin>>t;
	while (t--)
	{
			string s;
			cin>>s;
			int dem=0,tmp=0,k=0;
			for(int i=0;i<s.length()-1;i++)
			{
				if(s[i]-'0'>s[i+1]-'0')
				{
					dem++;
				}
				else if(s[i]-'0'<s[i+1]-'0')
				{
					tmp++;
				}
				else
				{
					k++;
				}
			}
			if((dem+k)==s.length()-1||(tmp+k)==s.length()-1)
			{
				cout<<"YES"<<endl;
			}
			else
			{
				cout<<"NO"<<endl;
			}
	}
}