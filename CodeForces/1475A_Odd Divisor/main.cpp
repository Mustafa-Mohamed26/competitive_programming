#include <iostream>
using namespace std;
 
bool isPowerOfTwo(long long n) {
    while (n % 2 == 0) {
        n /= 2;
    }
    return n == 1;
}
 
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        if (isPowerOfTwo(n)) {
            cout << "NO" << endl;
        } else {
            cout << "YES" << endl;
        }
    }
    return 0;
}