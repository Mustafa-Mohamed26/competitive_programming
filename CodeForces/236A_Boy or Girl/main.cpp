#include <iostream>
#include <algorithm>
#include <cctype>
#include <unordered_set>
#include "string"
using namespace std;
 
int main()
{
    string username;
    cin >> username;
 
    unordered_set<char> distinctChars;
 
 
    for (char c : username) {
        distinctChars.insert(c);
    }
 
 
    if (distinctChars.size() % 2 == 1) {
        cout << "IGNORE HIM!" << endl;
    } else {
        cout << "CHAT WITH HER!" << endl;
    }
}