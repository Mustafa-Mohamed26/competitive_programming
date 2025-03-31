#include <iostream>
#include <math.h>
#include <cmath>
#include <cstdlib>
#include <vector>
#include <algorithm>
using namespace std;
 
 
int main() {
    int Y, W;
    cin >> Y >> W;
 
    int max_YW = max(Y, W);
 
    if (max_YW == 1) {
        cout << "1/1" << endl;
    }
    else if (max_YW == 2) {
        cout << "5/6" << endl;
    }
    else if (max_YW == 3) {
        cout << "2/3" << endl;
    }
    else if (max_YW == 4) {
        cout << "1/2" << endl;
    }
    else if (max_YW == 5) {
        cout << "1/3" << endl;
    }
    else if (max_YW == 6) {
        cout << "1/6" << endl;
    }
 
    return 0;
}