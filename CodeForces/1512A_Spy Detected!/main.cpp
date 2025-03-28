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
 
int main() {
    int t;
    cin >> t;
 
    while (t--) {
        int num;
        cin >> num;
 
        vector<int> a(num);
 
        for (int i = 0; i < a.size(); i++)
        {
            cin >> a[i];
        }
        
        int unique_index = -1;
 
        if (a[0] == a[1]) {
            for (int i = 2; i < num; ++i) {
                if (a[i] != a[0]) {
                    unique_index = i + 1;
                    break;
                }
            }
        }
        else if (a[0] == a[2]) {
            unique_index = 2; 
        }
        else {
            unique_index = 1; 
        }
 
        cout << unique_index << endl;
    }
 
    return 0;
}