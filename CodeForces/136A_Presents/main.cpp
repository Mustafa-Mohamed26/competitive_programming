#include <iostream>
#include <cmath>
#include <set>
 
using namespace std;
 
int main() {
    int n;
    std::cin >> n;
 
    int gifts[100];
    int result[100] = {0};
 
    for (int i = 0; i < n; ++i) {
        std::cin >> gifts[i];
    }
 
    for (int i = 0; i < n; ++i) {
        result[gifts[i] - 1] = i + 1;
    }
 
    for (int i = 0; i < n; ++i) {
        std::cout << result[i] << " ";
    }
 
 
}