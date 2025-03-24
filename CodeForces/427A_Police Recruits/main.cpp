#include <iostream>
#include <vector>
using namespace std;
 
int main()
{
 
	int n;
	cin >> n;
 
	vector<int> events(n);
	for (int i = 0; i < n; i++) {
		cin >> events[i];
	}
 
	int free_officers = 0;
	int untreated_crimes = 0;
 
	for (int i = 0; i < n; i++)
	{
		if (events[i] == -1) {
			if (free_officers > 0) {
				free_officers--;
			}
			else {
				untreated_crimes++;
			}
		}
		else {
			free_officers += events[i];
		}
	}
 
	cout << untreated_crimes << endl;
 
 
 
	
   
}