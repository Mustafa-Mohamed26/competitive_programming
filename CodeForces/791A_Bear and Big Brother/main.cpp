#include <iostream>
#include <algorithm>
#include <cctype>
#include <unordered_set>
#include "string"
using namespace std;
 
int main()
{
    int l,b;
    cin >> l >> b;
    int count = 0;
    while(l <= b){
        if(l == 1 && b == 1){
            count++;
            break;
        }
        l *= 3;
        b *= 2;
        count++;
    }
 
    cout << count;
}