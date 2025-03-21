#include <iostream>
#include <cmath>
#include <set>
 
using namespace std;
 
 
 
int main() {
    std::string num1, num2;
    std::cin >> num1 >> num2;
 
    int n = num1.length(); // Both numbers have the same length
 
    std::string result;
    for (int i = 0; i < n; ++i) {
        if (num1[i] != num2[i]) {
            result += '1';
        } else {
            result += '0';
        }
    }
 
    std::cout << result << std::endl;
}