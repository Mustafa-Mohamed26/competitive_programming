#include <iostream>
#include <cmath>
#include <set>
 
using namespace std;
 
 
 
int main() {
    int t;
    std::cin >> t;
 
    while (t--) {
        int a, b;
        std::cin >> a >> b;
 
        int remainder = a % b;
        int moves = (remainder == 0) ? 0 : b - remainder;
 
        std::cout << moves << std::endl;
    }
 
}