#include <iostream>
#include <string>
using namespace std;
 
int main() {
    int t;
    cin >> t;
    while (t--) {
        string b;
        cin >> b;
        string a = b.substr(0, 2); 
        for (int i = 2; i < b.length(); i += 2) {
            a += b[i + 1]; 
        }
        cout << a << endl;
    }
    return 0;
}