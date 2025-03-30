#include <iostream>
#include <vector>
#include <algorithm>
 
using namespace std;
 
int main() {
    int n;
    cin >> n;
    
    vector<int> a(n);
    vector<long long> freq(100001, 0);
    
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        freq[a[i]]++;
    }
    
    vector<long long> dp(100001, 0);
    
    dp[1] = freq[1];
    for (int i = 2; i <= 100000; i++) {
        dp[i] = max(dp[i-1], dp[i-2] + freq[i] * i);
    }
    
    cout << dp[100000] << endl;
    
    return 0;
}