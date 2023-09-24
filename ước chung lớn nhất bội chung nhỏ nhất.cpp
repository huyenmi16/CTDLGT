
#include <iostream>
using namespace std;
 
int ucln(int a, int b)
{
    if(a==0 || b==0 ) return a+b;
    while(a!=b)
    {
    	if(a>b) a=a-b;
    	else b=b-a;
	}
	return a;
}
 
int main()
{
    int t ;
    cin>>t;
    while(t--)
    {
    	int a, b;
	    cin >> a >> b;
	    cout << ucln(a,b)<<endl;
	    cout << a*b/ucln(a,b)<<endl;
	    return 0;
	}
}