# Hulk's Feelings 💚🔥

## Problem Statement 📜
Dr. Bruce Banner struggles to express his emotions when he transforms into the Incredible Hulk. His emotions follow a specific pattern of alternating **hate** and **love** for `n` layers.

Your task is to construct Hulk's phrase based on the given number of layers, following this structure:
- The first layer starts with **"I hate"**. 😡
- The second layer adds **"that I love"**. ❤️
- The third layer continues with **"that I hate"**, and so on.
- The last layer always ends with **"it"**. ✅

## Input Format ⌨️
- A single integer `n` (1 ≤ n ≤ 100), representing the number of layers in Hulk's feelings.

## Output Format 📤
- Print a single string representing Hulk's feelings.

## Examples 🔍

### Input 1
```
1
```
### Output 1
```
I hate it
```

### Input 2
```
2
```
### Output 2
```
I hate that I love it
```

### Input 3
```
3
```
### Output 3
```
I hate that I love that I hate it
```

## Solution Approach 🛠️
1. **Iterate through `n` layers**, appending "I hate" for odd layers and "I love" for even layers.
2. **Add "that"** between layers except for the last one.
3. **End the phrase with "it"**.

## Complexity Analysis 📊
- **Time Complexity:** O(n) (since we iterate `n` times)
- **Space Complexity:** O(1) (only a few variables are used)

This approach efficiently constructs Hulk's feelings dynamically based on the given input. 💪😠

