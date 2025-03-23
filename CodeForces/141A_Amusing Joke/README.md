# 🎭 Amusing Joke

## 📖 Problem Statement
After a New Year celebration, the names of the guest and the host were written above the entrance. However, someone shuffled the letters and left them in a pile. The task is to check whether the pile of letters can be rearranged to form exactly the guest's and host's names combined.

## 📥 Input
- 📌 The first line contains the guest's name.
- 📌 The second line contains the host's name.
- 📌 The third line contains the shuffled letters found in the pile.
- 🔠 All names consist only of uppercase Latin letters (A-Z).
- 🔢 The length of each line does not exceed 100.

## 📤 Output
- ✅ Print `YES` if the letters in the pile can be rearranged to exactly match the combined names of the guest and host.
- ❌ Otherwise, print `NO`.

## 📝 Examples
### Example 1
**📥 Input:**
```
SANTACLAUS
DEDMOROZ
SANTAMOROZDEDCLAUS
```
**📤 Output:**
```
YES
```

### Example 2
**📥 Input:**
```
PAPAINOEL
JOULUPUKKI
JOULNAPAOILELUPUKKI
```
**📤 Output:**
```
NO
```

### Example 3
**📥 Input:**
```
BABBONATALE
FATHERCHRISTMAS
BABCHRISTMASBONATALLEFATHER
```
**📤 Output:**
```
NO
```

## 📌 Constraints
- 🔤 All input strings contain only uppercase English letters.
- 🔢 The length of each string does not exceed 100.

## 💡 Solution Approach
1. 🔗 Concatenate the guest's name and the host's name.
2. 📊 Check if the character counts in the concatenated string match the character counts in the shuffled pile.
3. ✅ If they match, print `YES`; otherwise, print `NO`.

## 🏷️ Tags
- 📝 String Manipulation
- 🎨 Frequency Counting
- 👨‍💻 Implementation