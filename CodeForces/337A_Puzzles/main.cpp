#include <iostream>
using namespace std;
 
 
void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; ++i) {
        for (int j = 0; j < n - i - 1; ++j) {
            if (arr[j] > arr[j + 1]) {
                
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
 
int main() {
    int n, m;
    cin >> n >> m;
 
    int puzzles[50];  
 
    for (int i = 0; i < m; ++i) {
        cin >> puzzles[i];
    }
 
    
    bubbleSort(puzzles, m);
 
    
    int min_diff = 1001;  
 
    
    for (int i = 0; i <= m - n; ++i) {
        int current_diff = puzzles[i + n - 1] - puzzles[i];
        if (current_diff < min_diff) {
            min_diff = current_diff;
        }
    }
 
    
    cout << min_diff << endl;
 
    return 0;
}