#include <bits/stdc++.h>

using namespace std;
int main()
{
	
	int s, n;
	cin >> s >> n;
	int a[n + 1];
	for (int i = 1; i <= n; i++)
		cin >> a[i];
	vector<vector<int>> l(n + 1, vector<int>(s + 1, 0));
	for (int i = 1; i <= n; i++)
		for (int j = 1; j <= s; j++)
			if (a[i] <= j)
				l[i][j] = max(l[i - 1][j - a[i]] + a[i], l[i - 1][j]);
			else
				l[i][j] = l[i - 1][j];
	cout << l[n][s];
}