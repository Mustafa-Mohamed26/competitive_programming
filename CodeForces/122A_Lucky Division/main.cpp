#include <iostream>
#include <cmath>
#include <set>
 
using namespace std;
 
 
 
bool isLucky(int num) {
    while (num > 0) {
        int digit = num % 10;
        if (digit != 4 && digit != 7) {
            return false;
        }
        num /= 10;
    }
    return true;
}
 
bool isAlmostLucky(int n) {
    for (int i = 1; i <= n; ++i) {
        if (n % i == 0 && isLucky(i)) {
            return true;
        }
    }
    return false;
}
 
int main() {
    int n;
    cin >> n;
 
    string result = isAlmostLucky(n) ? "YES" : "NO";
    cout << result << endl;
 
    return 0;
}