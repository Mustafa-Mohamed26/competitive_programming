#include <iostream>

int main() {
    int m, n;
    std::cin >> m >> n;
    
    int bord = m * n;
    int numberOfD = bord / 2;
    
    std::cout << numberOfD << std::endl;
    
    return 0;
}