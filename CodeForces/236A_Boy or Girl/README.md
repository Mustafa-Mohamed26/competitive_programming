# 👨‍🎓 Boy or Girl 👩‍🎓

## Problem Statement 
💻 In online forums, many users use misleading avatars, making it difficult to determine their gender. To solve this issue, our hero has devised a method to recognize a user's gender based on their username.

### 🌐 Method:
- If the number of **distinct characters** in a username is **odd**, the user is considered **male** ♂.
- If the number of **distinct characters** is **even**, the user is considered **female** ♀.

## 📚 Input Format
- A **single non-empty string** containing only lowercase English letters.
- The length of the string is at most **100** characters.

## 📃 Output Format
- Print **"💌 CHAT WITH HER!"** if the username belongs to a female.
- Print **"⛔ IGNORE HIM!"** if the username belongs to a male.

## 📊 Examples
### 📝 Example 1
#### ✉️ Input
```
wjmzbmr
```
#### 📝 Output
```
CHAT WITH HER!
```
#### 🔄 Explanation
The distinct characters in "wjmzbmr" are: `w, j, m, z, b, r` (6 distinct characters, even count). Thus, the output is **"CHAT WITH HER!"**.

### 📝 Example 2
#### ✉️ Input
```
xiaodao
```
#### 📝 Output
```
IGNORE HIM!
```
#### 🔄 Explanation
The distinct characters in "xiaodao" are: `x, i, a, o, d` (5 distinct characters, odd count). Thus, the output is **"IGNORE HIM!"**.

### 📝 Example 3
#### ✉️ Input
```
sevenkplus
```
#### 📝 Output
```
CHAT WITH HER!
```
#### 🔄 Explanation
The distinct characters in "sevenkplus" are: `s, e, v, n, k, p, l, u` (8 distinct characters, even count). Thus, the output is **"CHAT WITH HER!"**.

## 👨‍💻 Solution Approach 
1. 📝 Read the input string.
2. 🛠️ Extract all unique characters from the string.
3. ➕ Count the number of unique characters.
4. ✅ If the count is even, print **"💌 CHAT WITH HER!"**, otherwise print **"⛔ IGNORE HIM!"**.