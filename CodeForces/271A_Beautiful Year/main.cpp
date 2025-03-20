#include <iostream>
#include <cmath>
#include <set>
 
using namespace std;
 
int main() {
    int y;
    cin >> y;
 
    while (true) {
        y++;
        // Check if the year has distinct digits
        set<char> digits;
        string year_str = to_string(y);
        bool distinct = true;
        for (char digit : year_str) {
            if (digits.count(digit) > 0) {
                distinct = false;
                break;
            }
            digits.insert(digit);
        }
 
        if (distinct) {
            cout << y << endl;
            break;
        }
    }
 
 
}