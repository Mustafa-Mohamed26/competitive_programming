#include <iostream>
#include <algorithm>
#include <cctype>
#include "string"
using namespace std;
 
int main()
{
    string sum;
    cin >> sum;
 
    int numbers[100];
    int count = 0;
    string currentNumber;
 
 
    for (char c : sum) {
        if (isdigit(c)) {
            currentNumber += c;
        } else {
            numbers[count++] = stoi(currentNumber);
            currentNumber = "";
        }
    }
 
 
    if (!currentNumber.empty()) {
        numbers[count++] = stoi(currentNumber);
    }
 
 
    sort(numbers, numbers + count);
 
 
    string newSum;
    for (int i = 0; i < count; i++) {
        newSum += to_string(numbers[i]);
        if (i != count - 1) {
            newSum += "+";
        }
    }
 
    
    cout << newSum << endl;
 
}