#include <iostream>
#include <vector>
using namespace std;
 
bool isLiked(int n) {
    return n % 3 != 0 && n % 10 != 3;
}
 
int main() {
    int t;
    cin >> t;
    
    vector<int> likedNumbers;
    int num = 1;
    while (likedNumbers.size() < 1000) {
        if (isLiked(num)) {
            likedNumbers.push_back(num);
        }
        num++;
    }
    
    while (t--) {
        int k;
        cin >> k;
        cout << likedNumbers[k - 1] << endl;
    }
    
    return 0;
}