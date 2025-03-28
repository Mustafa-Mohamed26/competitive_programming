#include <iostream>
#include <string>
 
using namespace std;
 
int main() {
    string borze;
    cin >> borze;
    
    string result;
    
    for (size_t i = 0; i < borze.length(); ++i) {
        if (borze[i] == '.') {
            result += '0';
        } else if (borze[i] == '-' && borze[i+1] == '.') {
            result += '1';
            ++i;
        } else if (borze[i] == '-' && borze[i+1] == '-') {
            result += '2';
            ++i;
        }
    }
    
    cout << result << endl;
    
    return 0;
}