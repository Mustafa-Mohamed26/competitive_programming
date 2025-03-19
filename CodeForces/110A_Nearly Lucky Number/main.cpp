#include <iostream>
#include "string"
using namespace std;
 
int countLuckyDigits(long long n) {
    int count = 0;
    while (n > 0) {
        int digit = n % 10;
        if (digit == 4 || digit == 7) {
            count++;
        }
        n /= 10;
    }
    return count;
}
 
bool isLuckyNumber(int x) {
    return x == 4 || x == 7;
}
 
int main() {
    long long n;
    cin >> n;
 
    int luckyCount = countLuckyDigits(n);
 
    if (isLuckyNumber(luckyCount)) {
        cout << "YES" << std::endl;
    } else {
        cout << "NO" << std::endl;
    }
}