#include <iostream>
#include <cmath>
#include <set>
 
using namespace std;
 
int main() {
    int n;
    cin >> n;
 
    int opinion;
    bool isHard = false;
 
    for (int i = 0; i < n; ++i) {
        cin >> opinion;
        if (opinion == 1) {
            isHard = true;
            break;
        }
    }
 
    if (isHard) {
        cout << "HARD" << endl;
    } else {
        cout << "EASY" << endl;
    }
 
 
}