#include <iostream>
#include <cmath>
#include <set>
 
using namespace std;
 
 
 
int main() {
    int n;
    cin >> n;
    double result = 0;
    double sum = 0;
    for (int i = 0; i < n; ++i) {
        double num;
        cin >> num;
 
        sum += num;
        result = sum / n;
    }
 
    cout << result;
}