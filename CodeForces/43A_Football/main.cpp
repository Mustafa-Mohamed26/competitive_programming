#include <iostream>
#include <math.h>
#include <cmath>
#include <cstdlib>
#include <vector>
#include <algorithm>
using namespace std;
 
 
int main() {
    int n;
    cin >> n;
 
    vector<string>arr;
 
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        arr.push_back(s);
    }
 
    string team1 = arr[0];
    string team2;
 
    int x = 0, y = 0;
 
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == team1) {
            x++;
        }
        else if (arr[i] != team1) {
            y++;
            if (team2 == "") {
                team2 = arr[i];
            }
            
        }
    }
 
    if (x > y) {
        cout << team1;
    }
    else if (y > x) {
        cout << team2;
    }
 
 
    return 0;
}