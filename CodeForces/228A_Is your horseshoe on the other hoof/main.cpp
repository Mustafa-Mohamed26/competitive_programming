#include <iostream>
#include <cmath>
#include <set>
 
using namespace std;
 
 
 
int main() {
    std::set<int> uniqueColors;
    int color;
 
    for (int i = 0; i < 4; ++i) {
        std::cin >> color;
        uniqueColors.insert(color);
    }
 
    int additionalColors = 4 - uniqueColors.size();
 
    std::cout << additionalColors << std::endl;
}