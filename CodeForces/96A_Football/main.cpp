#include <iostream>
#include <cmath>
#include <set>
 
using namespace std;
 
 
 
string is_dangerous(const string& situation) {
    int count = 1;
    for (int i = 1; i < situation.length(); ++i) {
        if (situation[i] == situation[i - 1]) {
            count++;
            if (count >= 7) {
                return "YES";
            }
        } else {
            count = 1;
        }
    }
 
    return "NO";
}
 
int main() {
    // Input
    string football_situation;
    cin >> football_situation;
 
    // Output
    string result = is_dangerous(football_situation);
    cout << result << endl;
 
    return 0;
}