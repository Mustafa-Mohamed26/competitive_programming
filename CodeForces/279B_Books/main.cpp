#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    long long t; 
    cin >> n >> t;

    int* arr = new int[n];

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int left = 0;
    long long sum = 0;
    int countBooks = 0;

    for (int right = 0; right < n; right++)
    {
        sum += arr[right];

        while (sum > t)
        {
            sum -= arr[left];
            left++;
        }

        countBooks = max(countBooks, right - left + 1);
    }

    cout << countBooks;

    delete[] arr;
    return 0;
}
