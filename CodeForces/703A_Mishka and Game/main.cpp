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
 
    int mishka = 0;
    int chris = 0;
 
    while (t--)
    {
        int m, c;
        cin >> m >> c;
 
        
 
        if (m > c) {
            mishka++;
        }
        else if (c > m) {
            chris++;
        }
 
        
    }
 
    if (mishka > chris) {
        cout << "Mishka";
    }
    else if (chris > mishka) {
        cout << "Chris";
    }
    else {
        cout << "Friendship is magic!^^";
    }
 
    return 0;
}