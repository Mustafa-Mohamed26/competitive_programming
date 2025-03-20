# 🎁 Presents

## 📌 Problem Statement
Little Petya loves gifts! Recently, he received a new laptop as a New Year gift from his mother. Instead of keeping it, he decided to give it to someone else because he enjoys the act of giving even more than receiving. To celebrate, he hosted a New Year party and invited `n` friends.

Petya decided to watch his friends exchange gifts while not participating himself. He numbered his friends from `1` to `n` and noted that friend number `i` gave a gift to friend number `p[i]`. He also ensured that each friend received exactly one gift.

Now, Petya wants to determine which friend gave a gift to each friend.

## 🔢 Input
- The first line contains an integer `n` (1 ≤ n ≤ 100) — the number of friends at the party.
- The second line contains `n` space-separated integers, where the `i`-th number is `p[i]`, representing the friend who received a gift from friend number `i`.

## 📤 Output
- Print `n` space-separated integers: the `i`-th number should be the friend who gave a gift to friend number `i`.

## ✅ Examples
### Example 1
**Input:**
```
4
2 3 4 1
```
**Output:**
```
4 1 2 3
```

### Example 2
**Input:**
```
3
1 3 2
```
**Output:**
```
1 3 2
```

### Example 3
**Input:**
```
2
1 2
```
**Output:**
```
1 2
```

## 🛠️ Implementation (C++ Example)
```cpp
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int p[n], result[n];
    
    for (int i = 0; i < n; i++) {
        cin >> p[i];
        result[p[i] - 1] = i + 1;
    }
    
    for (int i = 0; i < n; i++) {
        cout << result[i] << " ";
    }
    cout << endl;
    return 0;
}
```

## 🔗 Related Topics
- ✅ Arrays
- ✅ Index Mapping
- ✅ Permutations

## 🏁 Conclusion
This problem involves reversing the mapping of gift-givers to recipients. Using an array, we can store and retrieve the correct positions efficiently. 🎉

