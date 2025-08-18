# ✅ Selection Sort - Theory & Logic

## 📚 What is Selection Sort?

**Selection Sort** is a simple comparison-based sorting algorithm. It divides the input array into two parts:
- The **sorted part** at the beginning.
- The **unsorted part** at the end.

The algorithm repeatedly **selects the smallest (or largest)** element from the unsorted part and **swaps it** with the first element of the unsorted part — gradually growing the sorted portion.

---

## 🔁 Logic of Selection Sort

1. Start from the first element.
2. Find the **smallest element** in the unsorted portion of the array.
3. Swap it with the **first unsorted element**.
4. Move the boundary of the sorted portion one step to the right.
5. Repeat the process until the entire array is sorted.

---

## 💡 Example

Unsorted Array: `[29, 10, 14, 37, 13]`

- Pass 1: Find min from `[29, 10, 14, 37, 13]` → 10 → Swap with 29 → `[10, 29, 14, 37, 13]`
- Pass 2: Find min from `[29, 14, 37, 13]` → 13 → Swap with 29 → `[10, 13, 14, 37, 29]`
- Pass 3: Find min from `[14, 37, 29]` → 14 → No swap needed → `[10, 13, 14, 37, 29]`
- Pass 4: Find min from `[37, 29]` → 29 → Swap with 37 → `[10, 13, 14, 29, 37]`
- ✅ Sorted

---

## ⏱️ Time Complexity

| Case       | Time Complexity |
|------------|------------------|
| Best Case  | O(n²) |
| Average    | O(n²) |
| Worst Case | O(n²) |

➡️ Why? Because it always runs two nested loops, even if the array is already sorted.

---

## 📌 Key Points

- Not a stable sort (relative order of equal elements may change).
- In-place sorting (no extra space needed).
- Simple but inefficient for large datasets.
- Better than Bubble Sort in terms of number of swaps.

---

