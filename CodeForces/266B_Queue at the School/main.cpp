#include <iostream>
#include <cmath>
using namespace std;
 
int main() {
    int n;
    int t;
 
    cin >> n >> t;
 
    string s;
    cin >> s;
 
    for (int i = 0; i < t; ++i) {
        for (int j = 0; j < n - 1; ++j) {
            if (s[j] == 'B' && s[j + 1] == 'G') {
                swap(s[j], s[j + 1]);
                ++j;
            }
        }
    }
 
    cout << s << endl;
 
 
}