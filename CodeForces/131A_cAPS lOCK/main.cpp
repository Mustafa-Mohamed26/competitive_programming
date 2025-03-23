#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
#include <sstream>
#include <string>
 
using namespace std;
 
int main()
{
    std::string word;
    std::cin >> word;
 
    bool allUpperCase = true;
 
    for (int i = 1; i < word.length(); ++i) {
        if (!isupper(word[i])) {
            allUpperCase = false;
            break;
        }
    }
 
    if (allUpperCase || (islower(word[0]) && allUpperCase)) {
        for (char& c : word) {
            if (islower(c)) {
                c = toupper(c);
            }
            else if (isupper(c)) {
                c = tolower(c);
            }
        }
    }
 
    std::cout << word << std::endl;
}