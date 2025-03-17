# Way Too Long Words

## Problem Statement
Sometimes words like **"localization"** or **"internationalization"** are too long to write multiple times. To simplify, words longer than **10** characters should be abbreviated as:

- First letter
- Number of middle letters
- Last letter

Example:
- `localization` → `l10n`
- `internationalization` → `i18n`

## Input
- The first line contains an integer **n** (1 ≤ n ≤ 100), the number of words.
- Each of the next **n** lines contains a single word consisting of lowercase English letters (1 to 100 characters long).

## Output
- For each word, output its abbreviation if it is longer than **10** characters; otherwise, output it unchanged.

## Example
### **Input:**
```
4
word
localization
internationalization
pneumonoultramicroscopicsilicovolcanoconiosis
```

### **Output:**
```
word
l10n
i18n
p43s
```

## Constraints
- **1 ≤ n ≤ 100**
- **1 ≤ word length ≤ 100**
- Only lowercase Latin letters are used.

## Solution Approach
- Read `n`, the number of words.
- For each word:
  - If its length is greater than **10**, transform it into the abbreviation.
  - Otherwise, print it as is.

This approach runs in **O(n)** time complexity.

