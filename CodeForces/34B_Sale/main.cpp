#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    sort(arr.begin(), arr.end()); 

    int earn = 0;

    for (int i = 0; i < n && m > 0; i++) {
        if (arr[i] < 0) {
            earn += -arr[i];
            m--;
        }
        else {
            break; 
        }
    }

    cout << earn;

   
    return 0;
}
