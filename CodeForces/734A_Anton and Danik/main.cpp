#include <iostream>
#include "string"
using namespace std;
 
int main() {
    int x;
    cin >> x;
    string s;
    cin >> s;
 
    int countD = 0;
    int countA = 0;
 
    for (int i = 0; i < x; ++i) {
        if(s[i] == 'D') {
            countD++;
        }else if(s[i] == 'A'){
            countA++;
        }
    }
 
    if(countD > countA){
        cout << "Danik";
    }else if(countA > countD){
        cout << "Anton";
    }else{
        cout << "Friendship";
    }
}