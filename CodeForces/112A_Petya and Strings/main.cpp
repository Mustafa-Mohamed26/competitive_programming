#include <iostream>
#include <algorithm>
#include <cctype>
#include "string"
using namespace std;
 
int main()
{
    string string1, string2;
    cin >> string1 >> string2;
 
    transform(string1.begin(), string1.end(), string1.begin(), ::tolower);
    transform(string2.begin(), string2.end(), string2.begin(), ::tolower);
 
    if (string1 < string2) {
        cout << "-1" << endl;
    } else if (string1 > string2) {
        cout << "1" << endl;
    } else {
        cout << "0" << endl;
    }
}