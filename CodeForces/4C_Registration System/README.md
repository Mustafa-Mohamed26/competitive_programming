# Registration System

## Problem Statement
A new e-mail service "Berlandesk" is launching soon. The site administration needs a prototype for their registration system. The system should work as follows:

- 🟢 When a new user requests a username, the system checks if it already exists.
- ✅ If the username is available, it is registered, and the system outputs `OK`.
- 🔄 If the username is taken, the system appends the smallest integer `i` (starting from 1) to the username to form a new unique name (e.g., `name1`, `name2`, etc.).
- 📩 The system returns this new unique name and registers it.

## Input
- 📥 The first line contains an integer `n` (1 ≤ n ≤ 10^5) — the number of registration requests.
- 📝 The next `n` lines contain registration requests, each consisting of lowercase Latin letters (at most 32 characters long).

## Output
- 📤 Print `n` lines, each containing:
  - ✅ `OK` if the requested username was available and successfully registered.
  - 🔄 A modified username (e.g., `name1`) if the requested username was already taken.

## Examples
### Example 1
**Input:**
```
4
abacaba
acaba
abacaba
acab
```
**Output:**
```
OK
OK
abacaba1
OK
```

### Example 2
**Input:**
```
6
first
first
second
second
third
third
```
**Output:**
```
OK
first1
OK
second1
OK
third1
```

## Constraints
- 🔢 `1 ≤ n ≤ 100000`
- 🔠 Each username consists of at most `32` lowercase Latin letters.

## Solution Approach
1. 🏷️ Use a hash map (dictionary) to keep track of usernames and their occurrence counts.
2. 🔄 For each request:
   - ✅ If the username is new, insert it and print `OK`.
   - 🔢 If the username exists, find the smallest integer `i` such that `namei` does not exist and register it.
3. ⚡ Using a hash map ensures efficient `O(1)` average time complexity for lookups and insertions.

## Tags
- 🗂️ Hash Map
- 🔤 String Manipulation
- ⚙️ Implementation