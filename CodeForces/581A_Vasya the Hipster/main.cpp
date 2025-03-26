#include <iostream>
#include <algorithm>
 
int main() {
    int a, b;
    std::cin >> a >> b;
 
    int different_days = std::min(a, b);
 
    a -= different_days;
    b -= different_days;
 
    int same_days = (a > 0 ? a / 2 : b / 2);
 
    std::cout << different_days << " " << same_days << std::endl;
 
    return 0;
}