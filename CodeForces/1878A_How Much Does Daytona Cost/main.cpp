#include <iostream>
using namespace std;



int main()
{
    int t, n, k;
    
    cin >> t;
    
    while (t--) {
        bool found = false;
        cin >> n >> k;
		int* arr = new int[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (arr[i] == k) {
                found = true;
                
            }
            
        }
        if (found) cout << "YES\n";
        else cout << "NO\n";
    }
}