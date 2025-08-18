# 🫧 Bubble Sort - Theory & Logic

## 📚 What is Bubble Sort?

**Bubble Sort** is a simple comparison-based sorting algorithm. It repeatedly steps through the list, compares adjacent elements, and **swaps them if they are in the wrong order**. This process is repeated until the list is sorted.

It is called "Bubble Sort" because the largest elements "bubble" up to the end of the list with each pass.

---

## 🔁 Logic of Bubble Sort

1. Start from the beginning of the array.
2. Compare the first and second elements:
   - If the first is greater than the second, **swap them**.
3. Move to the next pair and repeat the comparison/swapping.
4. Continue this process until the end of the array.  
   ✅ After the first pass, the **largest element will be at the end**.
5. Repeat steps 1-4 for the remaining unsorted part of the array.
6. Continue until no more swaps are needed.

---

## 💡 Example

Unsorted Array: `[5, 3, 8, 4, 2]`

- Pass 1: `[3, 5, 4, 2, 8]`  
- Pass 2: `[3, 4, 2, 5, 8]`  
- Pass 3: `[3, 2, 4, 5, 8]`  
- Pass 4: `[2, 3, 4, 5, 8]` ✅ Sorted

---

## ⏱️ Time Complexity

| Case       | Time Complexity |
|------------|------------------|
| Best Case  | O(n) *(already sorted)* |
| Average    | O(n²) |
| Worst Case | O(n²) |

---

## 📌 Key Points

- Easy to understand, but **inefficient** for large datasets.
- Stable sorting algorithm.
- In-place sorting (no extra space needed).

---

