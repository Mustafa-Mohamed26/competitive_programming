#include <iostream>
#include <cmath>
#include <set>
 
using namespace std;
 
 
 
string canSayHello(const string& word) {
    string hello = "hello";
    int helloIndex = 0;
 
    for (int i = 0; i < word.length(); ++i) {
        if (word[i] == hello[helloIndex]) {
            helloIndex++;
            if (helloIndex == 5) {
                return "YES";
            }
        }
    }
 
    return "NO";
}
 
int main() {
    // Input
    string word;
    cin >> word;
 
    // Output
    string result = canSayHello(word);
    cout << result << endl;
 
    return 0;
}