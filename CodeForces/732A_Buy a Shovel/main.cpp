#include <iostream>
using namespace std;
 
int main() {
    int k, r;
    cin >> k >> r;
 
    for (int i = 1; i <= 10; ++i) {
        int cost = k * i;
        if (cost % 10 == 0 || cost % 10 == r) {
            cout << i << endl;
            break;
        }
    }
 
    return 0;
}