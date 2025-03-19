#include <iostream>
#include <cmath>
using namespace std;
 
int main() {
    int n;
    cin >> n;
 
    int h;
    cin >> h;
 
    int a;
    int result = 0;
 
    for (int i = 0; i < n; ++i) {
        cin >> a;
 
        if(a <= h){
            result += 1;
        }else if(a > h){
            result += 2;
        }
    }
 
    cout << result;
 
 
}