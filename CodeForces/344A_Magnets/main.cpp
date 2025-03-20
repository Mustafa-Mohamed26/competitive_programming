#include <iostream>
#include <cmath>
#include <set>
 
using namespace std;
 
int main() {
    int n;
    cin >> n;
 
    int s;
    int* num = new int[n];
 
    int g = 0;
 
    for (int i = 0; i < n; ++i) {
        cin >> s;
        num[i] = s;
 
        if(num[i] != num[i -1]){
            g += 1;
        }else{
            g += 0;
        }
 
    }
 
    cout << g;
 
 
}