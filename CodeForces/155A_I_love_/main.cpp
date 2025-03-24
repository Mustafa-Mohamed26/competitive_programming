#include <iostream>
#include <vector>
 
int main() {
    int n;
    std::cin >> n;
 
    std::vector<int> points(n);
 
    for (int i = 0; i < n; ++i) {
        std::cin >> points[i];
    }
 
    int amazingCount = 0;
    int best = points[0];
    int worst = points[0];
 
    for (int i = 1; i < n; ++i) {
        if (points[i] > best) {
            best = points[i];
            ++amazingCount;
        }
        else if (points[i] < worst) {
            worst = points[i];
            ++amazingCount;
        }
    }
 
    std::cout << amazingCount << std::endl;
}