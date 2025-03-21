#include <iostream>
#include <algorithm>
 
using namespace std;
 
int main()
{
	int n, sum = 0, ans = 0, p = 0;;
	cin >> n;
	int* a = new int[n];
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
		sum += a[i];
	}
	sum = sum / 2;
	sort(a, a + n);
	for (int i = n-1; i >= 0; i--)
	{
		ans += a[i];
		p++;
		if (ans > sum)
			break;
	}
	cout << p;
}