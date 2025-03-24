#include <iostream>
#include <vector>
#include <algorithm>
 
using namespace std;
 
vector<int> slice_number(int num) {
    vector<int> digits;
 
    if (num == 0) {
        digits.push_back(0);
        return digits;
    }
 
    while (num > 0) {
        digits.push_back(num % 10); 
        num /= 10; 
    }
 
    reverse(digits.begin(), digits.end());
 
    return digits;
}
 
int main() {
    int t;
    cin >> t;
 
    string s;
 
    while (t--) {
        cin >> s;
 
        if ((s[0] == 'y' || s[0] == 'Y')  && (s[1] == 'e' || s[1] == 'E')&& (s[2] == 's' || s[2] == 'S')) {
            cout << "YES" << endl;
        }
        else {
            cout << "NO" << endl;
        }
    }
   
 
    return 0;
}