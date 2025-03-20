# 🚀 Queue at the School

## 📌 Problem Statement
During the break, schoolchildren (boys and girls) formed a queue of `n` people in the canteen. Initially, they stood in the order they entered the canteen. However, boys started feeling awkward standing in front of girls, so they began letting the girls move forward each second.

Each second:
- If a boy (`B`) is standing in front of a girl (`G`), they swap positions.

Given the initial arrangement, determine the queue's order after `t` seconds.

## 📝 Input
- The first line contains two integers, `n` and `t` (`1 ≤ n, t ≤ 50`):
  - `n` is the number of children in the queue.
  - `t` is the number of seconds the process runs.
- The second line contains a string `s` of length `n`, representing the queue:
  - `B` represents a boy.
  - `G` represents a girl.

## 📤 Output
- Print the final arrangement of the queue after `t` seconds.

## 🔍 Example
### Input
```
5 1
BGGBG
```
### Output
```
GBGGB
```

### Input
```
5 2
BGGBG
```
### Output
```
GGBGB
```

### Input
```
4 1
GGGB
```
### Output
```
GGGB
```

## 💡 Approach
1. Convert the queue into a list for easy swapping.
2. Repeat the swapping process `t` times:
   - Traverse the queue.
   - If `B` is immediately followed by `G`, swap them and skip the next index to prevent multiple swaps in one iteration.
3. Convert the list back to a string and print the result.

## 🔥 Complexity Analysis
- **Time Complexity:** `O(n * t)`, since we process at most `50 * 50 = 2500` swaps in the worst case, which is efficient for small `n`.
- **Space Complexity:** `O(n)`, as we store the queue as a list.

## 🎯 Tags
- 🔄 Simulation
- 👦👧 String Manipulation
- 🚀 Swapping Algorithm

