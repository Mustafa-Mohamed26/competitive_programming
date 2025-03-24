#include <iostream>
#include <vector>
#include <cmath>
#include <unordered_set>
 
using namespace std;
 
vector<bool> sieve(int maxN) {
    vector<bool> is_prime(maxN + 1, true);
    is_prime[0] = is_prime[1] = false;
    for (int i = 2; i * i <= maxN; ++i) {
        if (is_prime[i]) {
            for (int j = i * i; j <= maxN; j += i) {
                is_prime[j] = false;
            }
        }
    }
    return is_prime;
}
 
int main() {
    int n;
    cin >> n;
    vector<long long> x(n);
 
    for (int i = 0; i < n; ++i) {
        cin >> x[i];
    }
 
    int maxN = 1000000;
    vector<bool> is_prime = sieve(maxN);
 
    unordered_set<long long> t_primes;
    for (int i = 2; i <= maxN; ++i) {
        if (is_prime[i]) {
            t_primes.insert((long long)i * i);
        }
    }
 
    for (int i = 0; i < n; ++i) {
        if (t_primes.count(x[i])) {
            cout << "YES" << endl;
        }
        else {
            cout << "NO" << endl;
        }
    }
 
    return 0;
}