#include <iostream>
#include <string>
using namespace std;
 
int main() {
    string s, t;
    cin >> s >> t;
 
    string reverseS = s;
    reverse(reverseS.begin(), reverseS.end());
 
    if (reverseS == t) {
        std::cout << "YES" << std::endl;
    } else {
        std::cout << "NO" << std::endl;
    }
}