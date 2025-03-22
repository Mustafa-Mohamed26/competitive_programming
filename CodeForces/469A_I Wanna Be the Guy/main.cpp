#include <iostream>
#include <cmath>
#include <set>
 
using namespace std;
 
 
 
int main() {
    int n;
    std::cin >> n;
 
    std::set<int> levelsPassed;
 
    int p, levelX;
    std::cin >> p;
    for (int i = 0; i < p; ++i) {
        std::cin >> levelX;
        levelsPassed.insert(levelX);
    }
 
    int q, levelY;
    std::cin >> q;
    for (int i = 0; i < q; ++i) {
        std::cin >> levelY;
        levelsPassed.insert(levelY);
    }
 
    if (levelsPassed.size() == n) {
        std::cout << "I become the guy." << std::endl;
    } else {
        std::cout << "Oh, my keyboard!" << std::endl;
    }
 
}