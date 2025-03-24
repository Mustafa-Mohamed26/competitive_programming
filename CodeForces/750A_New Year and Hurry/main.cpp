#include <iostream>
#include <algorithm>
 
using namespace std;
 
int main() {
    int num, time;
    cin >> num >> time;
 
	int solve = 0;
	int allowed = 240 - time;
	int count = 0;
 
	for (int i = 1; i <= num; i++)
	{
		solve += i * 5;
		if (solve > allowed) {
			break;
		}
		count++;
 
	}
 
	cout << count;
 
 
 
 
 
 
}