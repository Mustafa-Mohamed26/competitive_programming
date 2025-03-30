#include <iostream>
#include <math.h>
#include <cmath>
#include <cstdlib>
#include <vector>
using namespace std;
 
int main()
{
    int n, k;
    cin >> n >> k;
 
    vector<int>arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
 
 
 
 
    int teamsMembers = 0;
    int teams = 0;
 
    for (int i = 0; i < n; i++)
    {
        if (arr[i] + k <= 5) {
            teamsMembers++;
            if (teamsMembers == 3) {
                teams++;
                teamsMembers = 0;
            }
        }
    }
 
    cout << teams;
 
    return 0;
}