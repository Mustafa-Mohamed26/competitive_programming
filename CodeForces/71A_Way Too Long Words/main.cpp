#include <iostream>
#include <math.h>
#include <cmath>
#include <cstdlib>
#include <vector>
#include <algorithm>
#include <iomanip> 
using namespace std;


int main() {
    
    int t;
    cin >> t;

    while (t--)
    {
        string s;
        cin >> s;

        

        int count = 0;

        for (int i = 1; i < s.length() - 1; i++)
        {
            count++;
        }

        if (s.size() <= 10) {
            cout << s << endl;
        }
        else {
            cout << s[0] << count << s[s.size() - 1] << endl;

        }

    }
    
    return 0;
}