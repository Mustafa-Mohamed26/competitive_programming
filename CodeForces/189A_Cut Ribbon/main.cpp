#include <iostream>
#include <vector>
#include <algorithm>
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
    int n, a, b, c;
    cin >> n >> a >> b >> c;
 
    vector<int> dp(n + 1, -1);
    dp[0] = 0;  
 
    for (int i = 0; i <= n; ++i) {
        if (dp[i] != -1) {
            if (i + a <= n) dp[i + a] = max(dp[i + a], dp[i] + 1);
            if (i + b <= n) dp[i + b] = max(dp[i + b], dp[i] + 1);
            if (i + c <= n) dp[i + c] = max(dp[i + c], dp[i] + 1);
        }
    }
 
    cout << dp[n] << endl;
    
	
	return 0;
}