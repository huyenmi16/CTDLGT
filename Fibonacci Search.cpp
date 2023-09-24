
#include <iostream>
using namespace std;

int fibonacciSearch(int arr[], int n, int x) {
if (n == 0) {
return -1;
}

int fib1 = 0, fib2 = 1, fib3 = fib1 + fib2;

while (fib3 < n) {
	fib1 = fib2;
	fib2 = fib3;
	fib3 = fib1 + fib2;
}

int offset = -1;
while (fib3 > 1) {
	int i = min(offset + fib2, n-1);

	if (arr[i] < x) {
		fib3 = fib2;
		fib2 = fib1;
		fib1 = fib3 - fib2;
		offset = i;
	}

	else if (arr[i] > x) {
		fib3 = fib1;
		fib2 = fib2 - fib1;
		fib1 = fib3 - fib2;
	}

	else {
		return i;
	}
}

if (fib2 == 1 && arr[offset+1] == x) {
	return offset + 1;
} else {
	return -1;
}
}

int main() {
	int n,x;
	cin>>n>>x;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	int ind = fibonacciSearch(a, n, x);
	if (ind >= 0) 
	{
		cout << ind << endl;
	} 

return 0;
}
