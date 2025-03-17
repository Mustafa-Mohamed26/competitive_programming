# ✍️ Way Too Long Words

## 📜 Problem Statement
Sometimes, words like "localization" or "internationalization" are too long to write multiple times. To simplify, words longer than **10** characters should be abbreviated as follows:

- 🔤 The first letter of the word
- 🔢 The number of characters between the first and last letter
- 🔤 The last letter of the word

### 📝 Example:
- `localization` → `l10n`
- `internationalization` → `i18n`

## 📥 Input Format
- 📌 The first line contains an integer **n** (1 ≤ n ≤ 100), the number of words.
- 📌 Each of the next **n** lines contains a single word consisting of lowercase English letters (1 to 100 characters long).

## 📤 Output Format
For each word, output its abbreviation if it is longer than **10** characters; otherwise, print it unchanged.

## ⚙️ Constraints
- ✅ **1 ≤ n ≤ 100**
- ✅ **1 ≤ word length ≤ 100**
- ✅ Words consist of lowercase Latin letters only.

## 🎯 Example
### **📌 Input:**
```
4
word
localization
internationalization
pneumonoultramicroscopicsilicovolcanoconiosis
```

### **📌 Output:**
```
word
l10n
i18n
p43s
```

## ⏳ Complexity Analysis
- 📖 **Reading Input:** O(n)
- ⚡ **Processing Each Word:** O(1)
- 🚀 **Total Complexity:** O(n) (Linear Time Complexity)

## 💡 Solution Approach
1. 🏷️ Read the integer `n` from input.
2. 🏗️ Process each word:
   - If the word's length is greater than 10, transform it into its abbreviated form.
   - Otherwise, print it as it is.
3. 🖨️ Print the modified words.

