#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--) {
        int n, x;
        cin >> n >> x;

        int* arr = new int[n];

        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        int maxDistance = 0;

        maxDistance = arr[0];
        for (int i = 1; i < n; i++) {
            maxDistance = max(maxDistance, arr[i] - arr[i - 1]);
        }
        
        maxDistance = max(maxDistance, 2 * (x - arr[n - 1]));

        cout << maxDistance << endl;

        delete[] arr;
    }

    return 0;
}
