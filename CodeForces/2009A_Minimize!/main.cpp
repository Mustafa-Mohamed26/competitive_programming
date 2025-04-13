#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>
#include <numeric> // accumulate
#include <string>
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
 
int simpleArraySum(vector<int> ar) {
    int sum = std::accumulate(ar.begin(), ar.end(), 0);
    return sum;
}
 
int diagonalDifference(const std::vector<std::vector<int>>& arr) {
    int n = arr.size();
    int primaryDiagonalSum = 0;
    int secondaryDiagonalSum = 0;
 
    // Loop through the matrix to calculate the sums
    for (int i = 0; i < n; i++) {
        primaryDiagonalSum += arr[i][i];             // Sum for primary diagonal
        secondaryDiagonalSum += arr[i][n - 1 - i];   // Sum for secondary diagonal
    }
 
    // Calculate the absolute difference
    return std::abs(primaryDiagonalSum - secondaryDiagonalSum);
}
 
void miniMaxSum(std::vector<long> arr) {
    // Sort the array
    std::sort(arr.begin(), arr.end());
 
    // Calculate the minimum sum (sum of the first 4 elements)
    long minSum = std::accumulate(arr.begin(), arr.begin() + 4, 0L);
 
    // Calculate the maximum sum (sum of the last 4 elements)
    long maxSum = std::accumulate(arr.end() - 4, arr.end(), 0L);
 
    // Print the result
    std::cout << minSum << " " << maxSum << std::endl;
}
 
 
 
 
bool check_error(const string& t) {
    int n = t.length();
 
    if (n <= 1) {
        return false;
    }
 
    for (int i = 1; i < n; ++i) {
        if (t.substr(0, i) == t.substr(i, i)) {
            return true;
        }
    }
 
    return false;
}
 
bool isPerfectSquare(int n) {
    int r = sqrt(n);
    return r * r == n;
}
 
bool isValidBeautifulMatrix(int r, const string& s) {
    for (int i = 0; i < r; ++i) {
        if (s[i] != '1' || s[(r - 1) * r + i] != '1') return false;
    }
    for (int i = 1; i < r - 1; ++i) {
        if (s[i * r] != '1' || s[i * r + r - 1] != '1') return false;
        for (int j = 1; j < r - 1; ++j) {
            if (s[i * r + j] != '0') return false;
        }
    }
    return true;
}
 
int main() {
 
    int t;
    cin >> t;
 
    int a, b;
 
    while (t--) {
        cin >> a >> b;
 
        cout << abs(a - b) << endl;
    }
 
    return 0;
}