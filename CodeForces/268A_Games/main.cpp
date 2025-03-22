#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
#include <sstream>
#include <string>
#include <unordered_set>
 
using namespace std;
 
int thickWallsNeeded(int n, vector<int>& edges, string& types) {
    unordered_map<int, int> countP, countS;
 
    for (int i = 0; i < n; ++i) {
        if (types[i] == 'P') {
            countP[i + 1] = 1;
        }
        else if (types[i] == 'S') {
            countS[i + 1] = 1;
        }
    }
 
    int thickWalls = 0;
 
    for (int i = 0; i < n - 1; ++i) {
        int u = min(edges[i], i + 1);
        int v = max(edges[i], i + 1);
 
        if ((countP[u] > 0 && countS[v] > 0) || (countS[u] > 0 && countP[v] > 0)) {
            thickWalls++;
        }
    }
 
    return thickWalls;
}
 
int main() {
    int n;
    cin >> n;
 
    vector<pair<int, int>> uniforms(n);
 
    for (int i = 0; i < n; ++i) {
        cin >> uniforms[i].first >> uniforms[i].second;
    }
 
    int count = 0;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (i != j) { 
                if (uniforms[i].first == uniforms[j].second) {
                    count++;
                }
            }
        }
    }
 
   
    cout << count << endl;
}