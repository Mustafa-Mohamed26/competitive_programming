# 🚔 Police Recruits - Solution Guide

## 📌 Problem Statement
The police department of your city has just started operating, initially without any officers. Officers are recruited over time in groups. Simultaneously, crimes are occurring in the city, and each officer can handle only one crime in their lifetime.

If a crime occurs and no officers are available, it remains untreated.

### 📥 Input
- The first line contains an integer **n** (1 ≤ n ≤ 10⁵), the number of events.
- The second line contains **n** space-separated integers:
  - A positive integer means that many officers are recruited at that event.
  - `-1` represents a crime occurrence.

### 📤 Output
- Print a single integer: the number of crimes that remain untreated.

## 📖 Example
### 📥 Input
```
3
-1 -1 1
```
### 📤 Output
```
2
```

### 📥 Input
```
8
1 -1 1 -1 -1 1 1 1
```
### 📤 Output
```
1
```

## 🛠️ Solution Approach
1. **👮 Initialize Counters:**
   - Maintain a counter for available police officers.
   - Maintain a counter for untreated crimes.
2. **🔍 Process Events:**
   - If an event is positive, increase the count of available officers.
   - If `-1` (a crime) occurs:
     - If an officer is available, assign them to the crime.
     - Otherwise, increment the untreated crimes counter.
3. **✅ Output the final count** of untreated crimes.

## ⏳ Complexity Analysis
- 📌 Since we only traverse the list once, the solution runs in **O(n)**, making it efficient for large inputs.

## 🔍 Edge Cases Considered
- ⚡ Cases where no officers are hired at all.
- ⚡ Cases where all crimes are handled efficiently.
- ⚡ Maximum constraints to ensure performance.

## 🎯 Conclusion
This approach ensures that crimes are handled optimally while keeping track of untreated cases efficiently. 🚨

