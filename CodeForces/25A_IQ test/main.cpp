#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
#include <sstream>
#include <string>
 
using namespace std;
 
int main()
{
    int n;
    std::cin >> n;
 
    std::vector<int> numbers(n);
 
    for (int i = 0; i < n; ++i) {
        std::cin >> numbers[i];
    }
 
    bool isEven = (numbers[0] % 2 == numbers[1] % 2) ? numbers[0] % 2 : numbers[2] % 2;
 
    for (int i = 0; i < n; ++i) {
        if ((numbers[i] % 2) != isEven) {
            std::cout << i + 1 << std::endl;
            break;
        }
    }
}