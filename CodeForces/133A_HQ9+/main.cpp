#include <iostream>
#include <algorithm>
 
using namespace std;
 
int main()
{
    string program;
    cin >> program;
 
    for (char c : program) {
        if (c == 'H' || c == 'Q' || c == '9') {
            cout << "YES" << endl;
            return 0;
        }
    }
 
    cout << "NO" << endl;
}