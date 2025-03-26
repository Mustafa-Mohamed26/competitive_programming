#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>
using namespace std;
 
vector<int> slice_number(int num) {
    vector<int> digits;
 
    if (num == 0) {
        digits.push_back(0);
        return digits;
    }
 
    while (num > 0) {
        digits.push_back(num % 10); 
        num /= 10; 
    }
 
    reverse(digits.begin(), digits.end());
 
    return digits;
}
 
 
int main()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL);
    int t;
    cin >> t;
 
    while (t--) {
        int a, b;
        cin >> a >> b;
 
        int diff = abs(a - b);
        int moves = (diff + 9) / 10; 
 
        cout << moves << endl;
    }
 
	return 0;
}