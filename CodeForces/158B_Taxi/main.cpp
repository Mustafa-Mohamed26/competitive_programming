#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
#include <sstream>
 
using namespace std;
 
int main()
{
    int n;
    std::cin >> n;
 
    int groupSizes[5] = { 0 }; 
 
    for (int i = 0; i < n; ++i) {
        int si;
        std::cin >> si;
        groupSizes[si]++;
    }
 
    int taxis = groupSizes[4]; 
 
    taxis += groupSizes[3]; 
 
    
    groupSizes[1] = std::max(0, groupSizes[1] - groupSizes[3]);
    taxis += (groupSizes[2] * 2 + groupSizes[1] + 3) / 4; 
 
    std::cout << taxis << std::endl;
	
	
	
}