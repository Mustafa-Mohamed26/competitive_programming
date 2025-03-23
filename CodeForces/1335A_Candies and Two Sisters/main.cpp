#include <iostream>
using namespace std;
 
int main() {
 
	int t;
	cin >> t;
 
	while (t--) {
 
		long x;
		cin >> x;
 
		if (x > 2) {
 
			if (x & 1) {
				cout << (x >> 1) << endl;
			}
			else {
 
				cout << ((x >> 1) - 1) << endl;
 
			}
 
		}
		else {
			cout << 0 << endl;
		}
 
	}
 
	return 0;
}