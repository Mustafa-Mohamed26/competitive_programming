#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
#include <sstream>
#include <string>
 
using namespace std;
 
int main()
{
    int n;
    cin >> n;
 
    string s;
 
    int faces = 0;
 
    for (int i = 0; i < n; i++)
    {
        cin >> s;
 
        if (s == "Tetrahedron")
        {
            faces += 4;
        }
        else if (s == "Cube") {
            faces += 6;
        }
        else if (s == "Octahedron") {
            faces += 8;
        }
        else if (s == "Dodecahedron") {
            faces += 12;
        }
        else if (s == "Icosahedron") {
            faces += 20;
        }
    }
 
    cout << faces;
}