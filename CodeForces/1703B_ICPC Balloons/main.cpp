#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        string s;
        cin >> s;

        vector<char> solved;
        int balloons = 0;

        for (int i = 0; i < n; i++)
        {
            if (find(solved.begin(), solved.end(), s[i]) != solved.end()) {
                balloons++;
            }else {
                solved.push_back(s[i]);
                balloons += 2;
            }
        }

        cout << balloons << endl;
    }

   
    return 0;
}
