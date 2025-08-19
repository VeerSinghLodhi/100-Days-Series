
---

# 📌 Quick Sort – Theory and Logic

Quick Sort is a **Divide and Conquer** algorithm that sorts an array by partitioning it into sub-arrays and then recursively sorting those sub-arrays.

---

## 🧠 Core Logic

1. **Choose a Pivot**:
   Select an element from the array as the *pivot* (commonly the last, first, middle, or a random element).

2. **Partitioning**:
   Rearrange the elements so that:

   * All elements **less than the pivot** are placed on the **left**.
   * All elements **greater than the pivot** are placed on the **right**.
   * The pivot is now at its **correct position** in the sorted array.

3. **Recursive Sorting**:
   Recursively apply the same logic to the left and right sub-arrays (excluding the pivot which is already sorted).

---

## 🔄 Process Summary

* Pick pivot
* Partition array
* Recur on left and right halves

This continues until the base condition is met (i.e., sub-array size is 0 or 1).

---

## ⏱️ Time Complexity

| Case         | Time Complexity |
| ------------ | --------------- |
| Best Case    | O(n log n)      |
| Average Case | O(n log n)      |
| Worst Case   | O(n²)           |

> Worst case occurs when the pivot divides the array very unevenly (e.g., already sorted array with first/last element as pivot).

---

## 📦 Space Complexity

* **O(log n)** (due to recursive stack)
* In-place sorting: **No extra array used**

---

## ✅ Key Points

* Fast and efficient for large datasets
* Not stable (doesn’t preserve the original order of equal elements)
* Works well with randomized or median pivot selection

---


