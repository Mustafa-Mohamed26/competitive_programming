#include <iostream>
using namespace std;

int main()
{
	int t;
	cin >> t;

	while (t--) {
		int n, k;
		cin >> n >> k;
		int* a = new int[n];
		for (int i = 0; i < n; i++)
		{
			cin >> a[i];
		}

        if (k == 1) {
            
            bool sorted = true;
            for (int i = 1; i < n; i++) {
                if (a[i] < a[i - 1]) {
                    sorted = false;
                    break;
                }
            }

            if (sorted)
                cout << "YES\n";
            else
                cout << "NO\n";
        }
        else {
            
            cout << "YES\n";
        }
    }
}
		
	
