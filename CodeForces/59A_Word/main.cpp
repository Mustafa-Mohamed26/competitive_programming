#include <iostream>
#include "string"
using namespace std;
 
int main() {
    string s;
    cin >> s;
 
    int upper = 0;
    int lower = 0;
 
    for (int i = 0; i < s.length(); ++i) {
        if (s[i] >= 'a' && s[i] <= 'z'){
            lower++;
        }else{
            upper++;
        }
    }
 
    if(lower < upper) {
        for (int i = 0; i < s.length(); ++i) {
            s[i] = toupper(s[i]);
        }
        cout << s;
    }else{
        for (int i = 0; i < s.length(); ++i) {
            s[i] = tolower(s[i]);
        }
        cout << s;
    }
 
}