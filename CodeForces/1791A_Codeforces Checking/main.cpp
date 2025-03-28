#include <iostream>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
 
    const string codeforces = "codeforces";
 
    while (t--) {
        char c;
        cin >> c;
 
        if (codeforces.find(c) != string::npos) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
 
    return 0;
}