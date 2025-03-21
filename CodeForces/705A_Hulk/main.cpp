#include <iostream>
#include <cmath>
#include <set>
 
using namespace std;
 
 
 
int main() {
    int n;
    std::cin >> n;
 
    std::string feeling = "I hate ";
 
    for (int i = 2; i <= n; ++i) {
        if (i % 2 == 0) {
            feeling += "that I love ";
        } else {
            feeling += "that I hate ";
        }
    }
 
    feeling += "it";
 
    std::cout << feeling << std::endl;
}