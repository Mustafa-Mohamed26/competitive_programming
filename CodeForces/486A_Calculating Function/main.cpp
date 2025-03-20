#include <iostream>
#include <cmath>
#include <set>
 
using namespace std;
 
long long calculateF(long long n) {
    long long odd_sum = (n + 1) / 2;
    return (n % 2 == 0) ? odd_sum : -odd_sum;
}
 
int main() {
    long long n;
    std::cin >> n;
 
    long long result = calculateF(n);
 
    std::cout << result << std::endl;
 
    return 0;
}