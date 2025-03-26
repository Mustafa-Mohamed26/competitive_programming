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
    int a, b, c, d;
    int count = 0;
    cin >> t;
 
    while (t--)
    {
        cin >> a >> b >> c >> d;
        if (a < b) {
            count++;
        }
        if (a < c) {
            count++;
        }
        if (a < d) {
            count++;
        }
 
        cout << count << endl;
        count = 0;
 
    }
 
	return 0;
}