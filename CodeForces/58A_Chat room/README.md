# 💬 Chat Room

## 📌 Problem Statement
Vasya has recently learned to type and log on to the Internet. He immediately entered a chat room and decided to say **hello** to everybody. Vasya typed the word `s`.

It is considered that Vasya **managed to say hello** if several letters can be deleted from the typed word so that it results in the word **"hello"**.

For example:
- If Vasya types **"ahhellllloou"**, it will be considered that he said **hello**.
- If he types **"hlelo"**, it will be considered that Vasya got misunderstood and he **didn't** manage to say hello.

Determine whether Vasya successfully said **hello**.

## 🔢 Input
- The first and only line contains a string `s` \(1 \leq |s| \leq 100\), consisting of lowercase Latin letters.

## 📤 Output
- Print **"YES"** if Vasya successfully said **hello**.
- Otherwise, print **"NO"**.

## ✅ Examples
### Example 1
**Input:**
```
ahhellllloou
```
**Output:**
```
YES
```

### Example 2
**Input:**
```
hlelo
```
**Output:**
```
NO
```

## 🔗 Related Topics
- ✅ String Matching
- ✅ Subsequence Check
- ✅ Greedy Approach

## 🏁 Conclusion
This problem is about checking if "hello" appears as a subsequence in the given string. The simplest way to solve it is by iterating through `s` while trying to match the letters in "hello" in order. 🚀