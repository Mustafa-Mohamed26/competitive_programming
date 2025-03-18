#include <iostream>
#include <algorithm>
#include <cctype>
#include <unordered_set>
#include "string"
using namespace std;
 
int main()
{
    int x;
    cin >> x;
    string s;
    cin >> s;
 
    int count = 0;
    for (int i = 1; i < x; i++) {
        if (s[i] == s[i - 1]) {
            count++;
        }
    }
 
    cout << count << endl;
 
}