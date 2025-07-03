#include <iostream>
#include <string>
using namespace std;

int main() {
    string x;
    cin >> x;

    for (int i = 0; i < x.size(); i++) {
        int digit = x[i] - '0';
        int inverted = 9 - digit;

        // Avoid leading zero
        if (i == 0 && inverted == 0) continue;

        if (inverted < digit)
            x[i] = '0' + inverted;
    }

    cout << x << endl;
    return 0;
}
