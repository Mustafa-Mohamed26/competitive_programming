# 🚋 Tram Capacity Problem

## 📌 Problem Statement
Linear Kingdom has exactly one tram line with `n` stops, numbered from `1` to `n` in order of the tram's movement.

At each stop:
- `a[i]` passengers exit the tram.
- `b[i]` passengers enter the tram.

The tram starts empty before the first stop and becomes empty after the last stop. Your task is to determine the **minimum capacity** of the tram such that the number of passengers inside never exceeds this capacity.

## 📝 Input
- The first line contains a single integer `n` (`2 ≤ n ≤ 1000`) — the number of tram stops.
- The next `n` lines contain two integers `a[i]` and `b[i]` (`0 ≤ a[i], b[i] ≤ 1000`) — the number of passengers that exit and enter at each stop, respectively.
- The following constraints apply:
  - `a[1] = 0` (No passengers exit at the first stop).
  - `b[n] = 0` (No passengers enter at the last stop).
  - At the last stop, all remaining passengers exit.

## 📤 Output
Print a single integer representing the **minimum possible capacity** of the tram.

## 🔍 Example
### Input
```
4
0 3
2 5
4 2
4 0
```

### Output
```
6
```

### Explanation
1. **Stop 1:** (Initial: `0`) → +3 → **Total: 3**
2. **Stop 2:** -2 → +5 → **Total: 6**
3. **Stop 3:** -4 → +2 → **Total: 4**
4. **Stop 4:** -4 → **Total: 0** (Empty)

The maximum number of passengers at any point was `6`, so the minimum tram capacity needed is **6**.

## 💡 Approach
1. Initialize `current_passengers = 0` and `max_capacity = 0`.
2. Iterate through each stop:
   - Subtract the number of exiting passengers.
   - Add the number of entering passengers.
   - Update `max_capacity` whenever `current_passengers` exceeds the previous maximum.
3. Print `max_capacity` at the end.

## 🚀 Complexity Analysis
- **Time Complexity:** `O(n)` (Single loop through `n` stops).
- **Space Complexity:** `O(1)` (Only a few variables used).

## 🏆 Solution Implementation
Here’s a simple C++ solution:
```cpp
#include <iostream>
using namespace std;

int main() {
    int n, a, b;
    cin >> n;
    int max_capacity = 0, current_passengers = 0;
    
    for (int i = 0; i < n; i++) {
        cin >> a >> b;
        current_passengers -= a;
        current_passengers += b;
        max_capacity = max(max_capacity, current_passengers);
    }
    
    cout << max_capacity << endl;
    return 0;
}
```

## 🎯 Tags
- 🚆 Simulation
- 🔢 Simple Math
- 📊 Maximum Calculation

