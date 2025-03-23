# 🔠 cAPS lOCK

## 📜 Problem Statement
Caps Lock is a computer keyboard key that, when activated, makes all typed letters capital by default. If pressed accidentally, it can lead to text formatting mistakes.

We consider a word to be mistakenly typed with Caps Lock if:
1. It contains only uppercase letters.
2. All letters except for the first one are uppercase.

If a word meets either of these conditions, we should change the case of all its letters. Otherwise, the word should remain unchanged.

## 📥 Input
- The input consists of a single word containing uppercase and lowercase Latin letters.
- The length of the word is between `1` and `100`, inclusive.

## 📤 Output
- Print the corrected word after processing it according to the rules mentioned.

## 🔢 Examples
### Example 1
**Input:**
```
cAPS
```
**Output:**
```
Caps
```

### Example 2
**Input:**
```
Lock
```
**Output:**
```
Lock
```

## 📝 Explanation
- In the first example, "cAPS" falls under the second condition (only the first letter is lowercase, and the rest are uppercase). Hence, we toggle the case, resulting in "Caps".
- In the second example, "Lock" does not meet any condition, so we leave it unchanged.

## ⚠️ Constraints
- `1 ≤ |word| ≤ 100` (word length is between `1` and `100` characters)

## 💡 Solution Approach
1. Check if the word meets the conditions for incorrect capitalization.
2. If it does, convert all characters to the opposite case.
3. Otherwise, print the word as it is.

## 🏷️ Tags
- 🔡 String Manipulation
- 🏗️ Implementation

