#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int test;
		string s;
		cin >> test >> s;
		int n = s.length();
		int i = n - 2;
		while (s[i + 1] <= s[i])
			i--;
		if (i < 0)
			cout << test << " BIGGEST" << endl;
		else
		{
			int k = n - 1;
			while (s[i] >= s[k])
				k--;
			swap(s[i], s[k]);
			sort(s.begin() + i + 1, s.end());
			cout << test << ' ' << s << endl;
		}
	}
}