 
---

## 📘 Program: Search Target in 2D Matrix

### 🔍 Description

This Java program searches for a **target value inside a 2D matrix** using an efficient approach based on **binary search**. It returns whether the target exists or not in the matrix.

---

### 🧠 Logic / Theory

* The matrix is considered as a **flattened sorted 1D array** for applying binary search.
* The total number of elements is calculated using `rows × columns`.
* `left` is set to 0 and `right` to the last index (rows × cols − 1).
* In each iteration of the loop:

  * The middle index `mid` is calculated.
  * The actual matrix value at this mid-point is accessed by converting the 1D index into 2D coordinates.
  * If the mid value equals the target → return `true`.
  * If the mid value is less than the target → search in the right half.
  * If the mid value is greater → search in the left half.
* If the loop finishes without finding the target, it returns `false`.

---

### ✅ Example

If the matrix is:
1 2 3
4 5 6
7 8 9

And the target is 5, the program will output:
**Target 5 exists in the matrix.**

---
 