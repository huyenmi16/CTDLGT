#include <bits/stdc++.h>
using namespace std;
bool cmp(int a, int b)
{
	return a > b;
}
int main()
{
	int n, i1 = 0, i2 = 0;
	cin >> n;
	int a[n];
	vector<int> b, c;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
		if (i % 2 == 0)
			b.push_back(a[i]);
		else
			c.push_back(a[i]);
	}
	sort(b.begin(), b.end());
	sort(c.begin(), c.end(), cmp);
	for (int i = 0; i < n; i++)
	{
		if (i % 2 == 0)
			cout << b[i1++] << " ";
		else
			cout << c[i2++] << " ";
	}
}