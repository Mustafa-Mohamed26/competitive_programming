#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>
 
using namespace std;
 
int main() {
    int n, l;
    cin >> n >> l;
    
    vector<int> lanterns(n);
    for (int i = 0; i < n; ++i) {
        cin >> lanterns[i];
    }
    
    sort(lanterns.begin(), lanterns.end());
    
    double max_gap = 0;
    for (int i = 1; i < n; ++i) {
        double gap = lanterns[i] - lanterns[i - 1];
        if (gap > max_gap) {
            max_gap = gap;
        }
    }
    
    double d = max({max_gap / 2.0, double(lanterns[0]), double(l - lanterns[n - 1])});
    
    cout << fixed << setprecision(10) << d << endl;
    
    return 0;
}