#include <iostream>
#include <cmath>

using namespace std;

int main() {
    long long n, m, a;
    cin >> n >> m >> a;

    long long flagstones = (ceil((double)n / a)) * (ceil((double)m / a));

    cout << flagstones << endl;
    return 0;
}
