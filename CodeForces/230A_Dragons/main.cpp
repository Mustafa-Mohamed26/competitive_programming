#include <iostream>
#include <vector>
#include <algorithm>
 
using namespace std;
 
 
struct Dragon {
    int strength;
    int bonus;
};
 
 
bool compareDragons(Dragon a, Dragon b) {
    return a.strength < b.strength;
}
 
int main() {
    int s, n;
    cin >> s >> n;
 
    vector<Dragon> dragons(n);
 
    for (int i = 0; i < n; ++i) {
        cin >> dragons[i].strength >> dragons[i].bonus;
    }
 
    
    sort(dragons.begin(), dragons.end(), compareDragons);
 
    
    for (int i = 0; i < n; ++i) {
        if (s > dragons[i].strength) {
            s += dragons[i].bonus;
        }
        else {
            cout << "NO" << endl;
            return 0;
        }
    }
 
    cout << "YES" << endl;
    return 0;
}