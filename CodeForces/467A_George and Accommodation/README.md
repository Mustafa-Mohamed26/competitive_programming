# 🏠 George and Accommodation

## 📌 Problem Statement
George has recently entered the **BSUCP** (Berland State University for Cool Programmers). George has a friend **Alex** who has also entered the university. Now they are moving into a **dormitory**.

George and Alex want to **live in the same room**. The dormitory has `n` rooms in total. At the moment, the `i`-th room has `p_i` people living in it, and the room can accommodate `q_i` people in total (`p_i \leq q_i`).

Your task is to count how many rooms have **enough free space** for both George and Alex.

## 🔢 Input
- The first line contains a single integer `n` \(1 \leq n \leq 100\) — the number of rooms.
- The next `n` lines each contain two integers `p_i` and `q_i` \(0 \leq p_i \leq q_i \leq 100\):
  - `p_i` — the number of people currently living in the room.
  - `q_i` — the total capacity of the room.

## 📤 Output
- Print a single integer — the number of rooms where George and Alex **can move in together**.

## ✅ Examples
### Example 1
**Input:**
```
3
1 1
2 2
3 3
```
**Output:**
```
0
```
### Example 2
**Input:**
```
3
1 10
0 10
10 10
```
**Output:**
```
2
```

## 🔗 Related Topics
- ✅ Conditional Statements
- ✅ Looping through Input
- ✅ Simple Arithmetic

## 🏁 Conclusion
This problem requires iterating through room data and checking if at least **two spaces** are available in each room. A simple loop and condition check solve this efficiently. 🚀