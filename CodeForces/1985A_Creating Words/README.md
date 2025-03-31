# 🔄 Creating Words

## 📜 Problem Statement
Matthew is given two strings `a` and `b`, both of length 3. He finds it amusing to create two new words by swapping the first character of `a` with the first character of `b`. Your task is to perform this swap and output the modified words.

## 📥 Input Format
The input consists of:
- An integer `t` (1 ≤ t ≤ 100) — the number of test cases.
- `t` lines, each containing two space-separated strings `a` and `b`, both of length 3.

The strings only contain lowercase Latin letters.

## 📤 Output Format
For each test case, output the modified strings `a` and `b`, separated by a space, after swapping their first characters.

## 📌 Example
### 📥 Input
```
6
bit set
cat dog
hot dog
uwu owo
cat cat
zzz zzz
```
### 📤 Output
```
sit bet
dat cog
dot hog
owu uwo
cat cat
zzz zzz
```

## 🔍 Explanation
For each test case:
1. Swap the first character of `a` and `b`.
2. Print the new values of `a` and `b`.

### Example Breakdown:
- `bit set` → Swap `b` and `s` → `sit bet`
- `cat dog` → Swap `c` and `d` → `dat cog`
- `hot dog` → Swap `h` and `d` → `dot hog`

## 💡 Solution Approach
1. Read `t` test cases.
2. For each pair of words:
   - Extract the first character of `a` and `b`.
   - Swap these first characters.
   - Print the modified words.

## ⏳ Complexity Analysis
- The solution runs in `O(t)`, as each test case involves simple string manipulations and printing.

