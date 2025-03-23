#include <iostream>
#include <string>
using namespace std;
 
int main() {
    string guest, host, pile;
    cin >> guest >> host >> pile;
 
    int combinedLetters[26] = { 0 };
    int pileLetters[26] = { 0 };
 
 
    for (char c : guest) {
        combinedLetters[c - 'A']++;
    }
    for (char c : host) {
        combinedLetters[c - 'A']++;
    }
 
 
    for (char c : pile) {
        pileLetters[c - 'A']++;
    }
 
 
    bool possible = true;
    for (int i = 0; i < 26; ++i) {
        if (combinedLetters[i] != pileLetters[i]) {
            possible = false;
            break;
        }
    }
    if (possible) {
        cout << "YES" << endl;
    }
    else {
        cout << "NO" << endl;
    }
 
    return 0;
}