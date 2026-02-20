#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        string s;
        cin >> s;

        if (n != 5) {
            cout << "NO" << endl;
            continue;
        }

        string target = "Timur";

        sort(s.begin(), s.end());
        sort(target.begin(), target.end());

        if (s == target)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}