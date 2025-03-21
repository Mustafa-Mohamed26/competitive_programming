#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
 
using namespace std;
 
int main()
{
    int n;
    cin >> n;
 
    string s;
    cin >> s;
 
    set<char> characters;
 
    for (char c : s) {
        if (isalpha(c)) {
            characters.insert(tolower(c));
        }
    }
 
    if (characters.size() == 26) {
        cout << "YES" << endl;
    }
    else {
        cout << "NO" << endl;
    }
}