#include <iostream>
#include <algorithm>
 
using namespace std;
 
int main() {
    int n, k, l, c, d, p, nl, np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;
    
    int total_drink = k * l;
    
    int total_slices = c * d;
    
    int total_salt = p;
    
    int toasts_from_drink = total_drink / nl;
    
    int toasts_from_limes = total_slices;
    
    int toasts_from_salt = total_salt / np;
    
    int toasts_per_friend = min({toasts_from_drink, toasts_from_limes, toasts_from_salt}) / n;
    
    cout << toasts_per_friend << endl;
    
    return 0;
}