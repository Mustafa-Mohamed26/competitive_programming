# Theatre Square ⛪

## Problem Statement
Theatre Square in the capital city of Berland is a rectangular area of size `n × m` meters. The square needs to be paved using square granite flagstones of size `a × a` meters.

To fully cover the square:
- The flagstones can extend beyond the square if necessary, but the entire surface must be covered.
- No flagstone can be broken.
- The sides of the flagstones must be parallel to the sides of the square.

Find the **minimum** number of flagstones required to completely pave the Theatre Square.

---

## Input ⚡
- The first line contains three integers: `n`, `m`, and `a` (1 ≤ n, m, a ≤ 10⁹).
  - `n`: Length of the Theatre Square (meters)
  - `m`: Width of the Theatre Square (meters)
  - `a`: Side length of one flagstone (meters)

## Output 📃
- Print a single integer: the minimum number of flagstones required to cover the square.

---

## Examples ✅

### Input 1:
```
6 6 4
```
### Output 1:
```
4
```

### Explanation:
- The square is `6 × 6`, and each flagstone is `4 × 4`.
- We need `ceil(6 / 4) = 2` flagstones along the length and `ceil(6 / 4) = 2` flagstones along the width.
- The total number of flagstones required = `2 × 2 = 4`.

---

## Solution Approach 💡
1. Calculate the number of flagstones needed along the length using `ceil(n / a)`.
2. Calculate the number of flagstones needed along the width using `ceil(m / a)`.
3. Multiply these two values to get the total number of flagstones required.

### Complexity Analysis ⏳
- **Time Complexity**: O(1) — Only a few mathematical operations are performed.
- **Space Complexity**: O(1) — Only a few integer variables are used.

---

## Formula Used ⚖️
The total number of flagstones required is given by:
```
ceil(n / a) * ceil(m / a)
```
Since C++ does not have a built-in `ceil` function for integer division, we can use:
```
((n + a - 1) / a) * ((m + a - 1) / a)
```
This ensures proper rounding up without using floating-point operations.

🚀 Happy Coding! 🚀

