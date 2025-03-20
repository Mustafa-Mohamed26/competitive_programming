#include <iostream>
#include <cmath>
using namespace std;
 
int main() {
    int n;
    cin >> n;
 
    int a;
    int b;
 
    int capacity = 0;
    int current_passengers = 0;
 
    for(int i = 0; i < n; i++){
        cin >> a >> b;
        current_passengers = current_passengers - a + b;
        // Update the capacity if needed
        capacity = max(capacity, current_passengers);
    }
 
    cout << capacity;
}