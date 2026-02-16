#include <iostream>
#include <algorithm>
using namespace std;



int main() {
    int n, k;
    cin >> n >> k;

    int* a = new int[n];

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int currentSum = 0;
    for (int i = 0; i < k; i++) {
        currentSum += a[i];
    }

    int minSum = currentSum;
    int index = 0; 

    for (int i = k; i < n; i++) {
        currentSum = currentSum - a[i - k] + a[i];

        if (currentSum < minSum) {
            minSum = currentSum;
            index = i - k + 1;
        }
    }

    cout << index + 1; 

    delete[] a;

    return 0;
}
