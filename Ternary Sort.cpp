
#include <iostream>
using namespace std;

int ternarySearch(int l, int r, int key, int ar[])

{
	while (r >= l) {

		int mid1 = l + (r - l) / 3;
		int mid2 = r - (r - l) / 3;

	
		if (ar[mid1] == key) {
			return mid1;
		}
		if (ar[mid2] == key) {
			return mid2;
		}

	

		if (key < ar[mid1]) {

			r = mid1 - 1;
		}
		else if (key > ar[mid2]) {


			l = mid2 + 1;
		}
		else {

			l = mid1 + 1;
			r = mid2 - 1;
		}
	}

	return -1;
}

int main()
{
	int l, r, p, key;
	cin>>l>>r>>p>>key;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	
	p = ternarySearch(l, r, key, a);

	cout << p << endl;
}
