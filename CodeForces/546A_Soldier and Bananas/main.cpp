#include <iostream>
#include <algorithm>
#include <cctype>
#include <unordered_set>
#include "string"
using namespace std;
 
int main() {
    int k, w, n;
    cin >> k >> w >> n;
    int cost = 0;
    for (int i = 1; i <= n ; ++i) {
        cost = cost + (k * i);
    }
    if(cost > w)
        cout << cost - w;
    else
        cout << 0;
}