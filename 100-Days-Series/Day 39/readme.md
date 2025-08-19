
---

# 🔗 Union of Two Arrays

## 📖 Theory

The **union** of two arrays refers to a collection of **all unique elements** that appear in **either** of the arrays (or both). This is a fundamental operation in set theory and is commonly used in programming to combine datasets or remove redundancy.

---

## 🧠 Definition

If we have:

```
arr1 = [1, 2, 3]
arr2 = [2, 3, 4]
```

Then the **union** is:

```
[1, 2, 3, 4]
```

Notice that **duplicates are removed**, and each element appears **only once**.

---

## 🔍 Logic

### ✅ Method 1: Using Set (Most Common Approach)

1. Initialize an empty **Set** (which automatically handles uniqueness).
2. Add all elements from the first array to the set.
3. Add all elements from the second array to the set.
4. The set now contains the union.

This method is efficient and language-friendly due to built-in set data structures.

---

### ✅ Method 2: Without Using Set (Manual Logic)

1. Create a result array or list.
2. Add all elements from the first array.
3. For each element in the second array:

   * Check if it is **already present** in the result.
   * If not, add it.
4. The result will contain only unique elements.

This is useful if you're not allowed to use built-in data structures like sets.

---

## 💡 Example

Input:

```
arr1 = [5, 1, 3, 2]
arr2 = [3, 6, 7, 1]
```

Output (Union):

```
[5, 1, 3, 2, 6, 7]
```

---

## ⏱️ Time Complexity

* **Using Set**: O(n + m)
* **Without Set**: O(n \* m) (if done via linear search for duplicates)

Where `n` and `m` are the sizes of the two arrays.

---

## 📦 Space Complexity

* **O(n + m)** in the worst case (if all elements are unique), due to the storage of the result.

---
