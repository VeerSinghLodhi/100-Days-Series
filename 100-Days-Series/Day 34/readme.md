# Insertion Sort

**Insertion Sort** is a simple and intuitive comparison-based sorting algorithm. It builds the final sorted array one element at a time by comparing each new element with those already sorted and inserting it into its correct position.

---

## 🔍 How Insertion Sort Works

1. The algorithm starts from the **second element** (index 1), assuming the first element is already sorted.
2. It compares the current element (called `key`) with elements in the **sorted part of the array** (left side).
3. If the `key` is smaller than any of the sorted elements, those elements are **shifted one position to the right** to make space.
4. The `key` is then **inserted at the correct position** in the sorted section.
5. This process continues until the array is completely sorted.

---

## 📌 Example

Given an array:  
`[5, 3, 4, 1]`

- Step 1: Compare 3 with 5 → insert before 5 → `[3, 5, 4, 1]`  
- Step 2: Compare 4 with 5 → insert before 5 → `[3, 4, 5, 1]`  
- Step 3: Compare 1 with all → insert at the beginning → `[1, 3, 4, 5]`

---

## 📈 Time and Space Complexity

| Case        | Time Complexity |
|-------------|-----------------|
| Best Case   | O(n) *(when array is already sorted)* |
| Average Case| O(n²)           |
| Worst Case  | O(n²) *(when array is reverse sorted)* |

- **Space Complexity:** O(1) — It sorts the array in-place.
- **Stability:** Yes — It maintains the relative order of equal elements.

---

## ✅ Advantages

- Easy to understand and implement
- Efficient for small or nearly sorted datasets
- In-place sorting (requires no extra memory)

---

## ❌ Disadvantages

- Inefficient for large datasets due to O(n²) time complexity

---

## 📚 When to Use

- When the dataset is **small**
- When the data is **almost sorted**
- For **educational purposes** to understand basic sorting techniques

---
