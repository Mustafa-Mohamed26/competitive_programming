#include <iostream>
#include <vector>
#include <algorithm>
 
using namespace std;
 
int main() {
    int n;
    cin >> n;
    
    vector<int> programmers, mathematicians, sportsmen;
    
    for (int i = 1; i <= n; ++i) {
        int t;
        cin >> t;
        if (t == 1) {
            programmers.push_back(i);
        } else if (t == 2) {
            mathematicians.push_back(i);
        } else if (t == 3) {
            sportsmen.push_back(i);
        }
    }
    
    int w = min({programmers.size(), mathematicians.size(), sportsmen.size()});
    
    cout << w << endl;
    
    for (int i = 0; i < w; ++i) {
        cout << programmers[i] << " " << mathematicians[i] << " " << sportsmen[i] << endl;
    }
    
}