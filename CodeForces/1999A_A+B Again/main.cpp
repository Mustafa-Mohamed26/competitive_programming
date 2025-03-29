#include <iostream>
 
 
using namespace std;
 
 
 
int main() {
    int t;
    cin >> t;
 
    int n;
    int n2;
    int n3;
 
    while (t--)
    {
        cin >> n;
 
        n2 = n % 10;
        n3 = n / 10;
 
        cout << n2 + n3 << endl;
 
        
 
    }
 
    return 0;
}