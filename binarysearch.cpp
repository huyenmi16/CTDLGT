
#include <bits/stdc++.h>
using namespace std;

int binarySearch(int arr[], int l, int r, int x)
{
	while (l <= r) {
		int m = l + (r - l) / 2;
		if (arr[m] == x)
			return m;

		if (arr[m] < x)
			l = m + 1;

		else
			r = m - 1;
	}

	return -1;
}

int main(void)
{
	int n,x;
	cin>>n>>x;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	int result = binarySearch(a, 0, n - 1, x);
	if(result==-1)
	{
		cout<<result<<endl;
	}
	return 0;
}
