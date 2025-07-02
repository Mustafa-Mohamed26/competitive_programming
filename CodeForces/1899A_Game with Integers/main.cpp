#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

void sortVector(vector<int>& vec) {
    sort(vec.begin(), vec.end());  // Sorts in ascending order
}


bool isSquare(const string& s) {
    int n = s.length();
    if (n % 2 != 0) return false; 
    int half = n / 2;
    return s.substr(0, half) == s.substr(half, half);
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        if (n % 3 == 0) {
            cout << "Second" << endl;
        }
        else {
            cout << "First" << endl;
        }
    }
}



