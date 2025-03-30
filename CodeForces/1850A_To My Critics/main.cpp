#include <iostream>
#include <math.h>
#include <cmath>
#include <cstdlib>
#include <vector>
#include <algorithm>
using namespace std;
 
 
int main() {
    int t;
    cin >> t;
    int a, b, c;
 
    while (t--) {
        cin >> a >> b >> c;
 
        if (a + b >= 10) {
            cout << "Yes" << endl;
        }
        else if(a + c >= 10) {
            cout << "Yes" << endl;
        }
        else if (b + c >= 10) {
            cout << "Yes" << endl;
        }
        else {
            cout << "No" << endl;
        }
    }
 
 
    return 0;
}