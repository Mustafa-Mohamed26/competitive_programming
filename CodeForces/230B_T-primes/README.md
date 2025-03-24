# 📌 T-Primes Problem - Solution Guide

## 📝 Problem Statement
A number is considered **T-prime** if it has exactly three distinct positive divisors. In other words, a T-prime is a square of a prime number.

Given an array of **n** positive integers, determine for each if it is a T-prime.

## 📥 Input
- The first line contains an integer **n** (1 ≤ n ≤ 10⁵), the number of numbers in the array.
- The second line contains **n** space-separated integers **xi** (1 ≤ xi ≤ 10¹²).

## 📤 Output
- For each number **xi**, print **"YES"** if it is a T-prime, otherwise print **"NO"**.

## 🛠️ Solution Approach
1. **Understanding T-Primes:**
   - A T-prime number must be a **perfect square**.
   - Its square root must be a **prime number**.
2. **Precompute Prime Numbers:**
   - Use the **Sieve of Eratosthenes** to generate prime numbers up to **10⁶** (since sqrt(10¹²) ≈ 10⁶).
3. **Efficient Check for Each Number:**
   - If a number **xi** is a perfect square and its square root is prime, it is a **T-prime**.

## 💻 Complexity Analysis
- **Sieve of Eratosthenes:** O(M log log M) (for M ≈ 10⁶)
- **Checking Each Number:** O(1) per number
- **Overall Complexity:** O(M log log M + n)

## 🔍 Edge Cases Considered
- **Smallest and Largest Values** (xi = 1 and xi = 10¹²)
- **Numbers Just Below and Above T-Primes**
- **Large Inputs (n = 10⁵)**
- **Prime and Composite Numbers**

## 🎯 Conclusion
This approach ensures we efficiently determine whether a number is a T-prime using precomputed primes and fast checks. 🚀

