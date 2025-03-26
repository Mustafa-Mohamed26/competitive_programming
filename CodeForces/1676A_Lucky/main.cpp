#include <iostream>
using namespace std;
 
int main() {
    int t;
    cin >> t;  
    
    while (t--) {
        string ticket;
        cin >> ticket;  
        
        
        int ticketNum = stoi(ticket);
 
        
        int sum1 = 0, sum2 = 0;
        for (int i = 0; i < 3; ++i) {
            sum1 += ticketNum % 10; 
            ticketNum /= 10;  
        }
 
        for (int i = 0; i < 3; ++i) {
            sum2 += ticketNum % 10;  
            ticketNum /= 10;  
        }
 
        if (sum1 == sum2) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    
    return 0;
}