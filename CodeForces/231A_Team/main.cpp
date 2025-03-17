#include <iostream>
using namespace std;

int main() {
    int num;
    cin >> num;
    
    int count = 0;
    for (int i = 0; i < num; i++) {
        int a, b, c;
        cin >> a >> b >> c;
        
        // Count if at least two team members are sure about the solution
        if (a + b + c >= 2) {
            count++;
        }
    }
    
    cout << count << endl;
    return 0;
}
