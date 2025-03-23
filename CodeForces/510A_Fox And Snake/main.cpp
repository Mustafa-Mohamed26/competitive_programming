#include <iostream>
#include <string>
#include <map>
 
using namespace std;
 
int main()
{
    int n, m;
    cin >> n >> m;
 
    char grid[50][50];
 
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            grid[i][j] = '.';
        }
    }
 
    bool right = true; 
    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) {
            
            for (int j = 0; j < m; j++) {
                grid[i][j] = '#';
            }
        }
        else {
            if (right) {
                
                grid[i][m - 1] = '#';
            }
            else {
                
                grid[i][0] = '#';
            }
            right = !right;
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << grid[i][j];
        }
        cout << endl;
    }
}
