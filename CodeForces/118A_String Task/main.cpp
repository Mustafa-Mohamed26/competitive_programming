#include <iostream>
#include <cmath>
#include <set>
 
using namespace std;
 
 
 
int main() {
    std::string input;
    std::cin >> input;
 
    std::string result;
    for (char ch : input) {
        ch = std::tolower(ch);  // Convert to lowercase
 
        if (ch == 'a' || ch == 'o' || ch == 'y' || ch == 'e' || ch == 'u' || ch == 'i') {
            continue;
        }
 
        result += '.';
        result += ch;
    }
 
    std::cout << result << std::endl;
 
}