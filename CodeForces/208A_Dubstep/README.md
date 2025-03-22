# 🎵 Dubstep - Problem Statement and Solution 🎧

## 📜 Problem Description
Vasya, a DJ, remixes songs by inserting the word **"WUB"** multiple times into them. To restore the original song, we need to **remove all occurrences** of "WUB" and reconstruct the original sequence of words.

## 📥 Input Format
- A **single non-empty string** consisting only of **uppercase English letters**.
- The **length** of the string does not exceed **200 characters**.
- "WUB" is used as a **separator** between words.
- The original song had **at least one word** before remixing.

## 📤 Output Format
- The **original words** of the song separated by **spaces**.

## 📝 Examples
### Example 1
**📌 Input:**
```
WUBWUBABCWUB
```
**📌 Output:**
```
ABC
```

### Example 2
**📌 Input:**
```
WUBWEWUBAREWUBWUBTHEWUBCHAMPIONSWUBMYWUBFRIENDWUB
```
**📌 Output:**
```
WE ARE THE CHAMPIONS MY FRIEND
```

## 🏗️ Solution Approach
✅ **Step 1:** **Split** the string using **"WUB"** as a delimiter.
✅ **Step 2:** **Filter out** empty segments to remove unnecessary spaces.
✅ **Step 3:** **Join** the remaining words with a **single space** to reconstruct the original song.

## ⚡ Edge Cases Considered
- **Multiple consecutive "WUB"** occurrences.
- **Songs with only one word**.
- **"WUB" appearing at the start or end** of the string.

## ⏳ Complexity Analysis
- **Time Complexity:** `O(n)`, where `n` is the length of the input string.
- **Space Complexity:** `O(n)`, as we store the words separately before joining them.

## 🎯 Conclusion
Using simple **string manipulation** techniques, we can efficiently reconstruct the original song from the **remixed version**. 🚀🎶