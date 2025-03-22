# 📐 Anton and Polyhedrons - Problem Statement

## 📜 Problem Description
Anton loves regular polyhedrons! There are **five** types of regular polyhedrons:

- **Tetrahedron** 🛑 → 4 triangular faces
- **Cube** 🔲 → 6 square faces
- **Octahedron** 🔷 → 8 triangular faces
- **Dodecahedron** 🔺 → 12 pentagonal faces
- **Icosahedron** 🔷 → 20 triangular faces

Anton has a collection of `n` polyhedrons, and he wants to calculate the **total number of faces** in his collection.

## 📥 Input Format
- The first line contains a single integer `n` (1 ≤ n ≤ 200,000) — the number of polyhedrons in Anton's collection.
- The next `n` lines each contain a string `si` representing the name of a polyhedron.

## 📤 Output Format
- Output a single integer — the total number of faces in Anton's collection.

## 📝 Examples
### Example 1
**📌 Input:**
```
4
Icosahedron
Cube
Tetrahedron
Dodecahedron
```
**📌 Output:**
```
42
```
**🧐 Explanation:**
- 1 Icosahedron → **20** faces
- 1 Cube → **6** faces
- 1 Tetrahedron → **4** faces
- 1 Dodecahedron → **12** faces
- **Total:** 20 + 6 + 4 + 12 = **42**

### Example 2
**📌 Input:**
```
3
Dodecahedron
Octahedron
Octahedron
```
**📌 Output:**
```
28
```
**🧐 Explanation:**
- 1 Dodecahedron → **12** faces
- 2 Octahedrons → **8 × 2 = 16** faces
- **Total:** 12 + 16 = **28**

## 🎯 Conclusion
This problem is efficiently solved by counting the total number of faces for each polyhedron in Anton's collection. 🚀

