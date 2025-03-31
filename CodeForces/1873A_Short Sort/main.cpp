#include <iostream>
#include <math.h>
#include <cmath>
#include <cstdlib>
#include <vector>
#include <algorithm>
#include <iomanip> 
using namespace std;
 
 
int main() {
    
    int t;
    cin >> t;
 
    while (t--) {
        string s;
        cin >> s;
 
        if (s == "abc" || s == "acb" || s == "bac" || s == "cba" ) {
            cout << "Yes" << endl;
        }
        else {
            cout << "No" << endl;
        }
    }
    
    return 0;
}