
---

# 📚 Merge Sort in Java

## 📌 Description

This Java program implements the **Merge Sort** algorithm to sort an array of integers in **ascending order**.

Merge Sort is a classic **Divide and Conquer** algorithm that:

* **Divides** the array into halves recursively
* **Sorts** each half
* **Merges** the sorted halves into a fully sorted array

---

## 🧠 Theory Behind Merge Sort

### 🔸 Divide and Conquer Approach

1. **Divide**:

   * Recursively split the array into two halves until each sub-array has only one element.

2. **Conquer**:

   * Sort and merge the two halves back together to form a sorted array.

3. **Combine**:

   * During merging, elements from the two subarrays are compared and arranged in sorted order using a temporary array.

---

## 🔄 Merge Process

The merging step is the key to merge sort:

* Compare elements from both subarrays
* Pick the smaller element and place it into a temporary array
* Copy remaining elements (if any) from both subarrays
* Finally, copy the sorted values back to the original array

---

## 💡 Time and Space Complexity

| Case       | Time Complexity |
| ---------- | --------------- |
| Best Case  | O(n log n)      |
| Average    | O(n log n)      |
| Worst Case | O(n log n)      |

**Space Complexity:** O(n) – due to the temporary array used in the merge step.

---

## ✨ Characteristics

* Stable sorting algorithm
* Not in-place (uses extra memory)
* Efficient for large datasets

---

