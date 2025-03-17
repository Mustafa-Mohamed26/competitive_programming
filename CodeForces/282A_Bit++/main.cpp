#include <iostream>
#include <string>
using namespace std;

int main() {
    int x;
    cin >> x;
    
    int count = 0;
    string operation;
    
    for (int i = 0; i < x; i++) {
        cin >> operation;
        
        if (operation == "X++" || operation == "++X") {
            count++;
        } else if (operation == "X--" || operation == "--X") {
            count--;
        }
    }
    
    cout << count << endl;
    return 0;
}