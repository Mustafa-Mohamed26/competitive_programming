#include <iostream>
#include <cmath>
using namespace std;
 
 
 
int main() {
 
    int t, a, b, c;
 
    cin >> t;
 
    while (t--) {
        cin >> a >> b >> c;
 
        if (a + b == c) {
            cout << "Yes" << endl;
        }
        else if (a + c == b) {
            cout << "Yes" << endl;
        }
        else if (b + c == a) {
            cout << "Yes" << endl;
        }
        else {
            cout << "No" << endl;
        }
    }
    
    return 0;
}