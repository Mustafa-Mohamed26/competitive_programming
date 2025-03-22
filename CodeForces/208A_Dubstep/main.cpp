#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
 
using namespace std;
 
int main()
{
    string dubstepRemix;
    cin >> dubstepRemix;
 
    size_t position = dubstepRemix.find("WUB");
 
    while (position != string::npos) {
        dubstepRemix.replace(position, 3, " ");
        position = dubstepRemix.find("WUB");
    }
 
    size_t firstNonSpace = dubstepRemix.find_first_not_of(" ");
    size_t lastNonSpace = dubstepRemix.find_last_not_of(" ");
    dubstepRemix = dubstepRemix.substr(firstNonSpace, lastNonSpace - firstNonSpace + 1);
 
    cout << dubstepRemix << endl;
	
	
}