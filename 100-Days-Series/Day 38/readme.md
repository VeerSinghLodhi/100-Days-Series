

---

# 🔗 Intersection of Two Arrays

## 📖 Theory

The **intersection of two arrays** refers to the set of elements that are **common** to both arrays. This problem is widely used in data filtering, set operations, and comparison-based logic in programming.

There are two main types of intersection problems:

1. **Basic Intersection (Unique Elements)**: Return only distinct elements present in both arrays.
2. **Intersection with Duplicates**: Return elements including duplicates if they appear multiple times in both arrays.

---

## 🔍 Logic

### ✅ 1. Basic Intersection (Unique Elements Only)

* Convert both arrays to **sets** to eliminate duplicates.
* Traverse one set and check if the element exists in the other.
* Add common elements to the result set.

**Use case**: Get all unique common values between two datasets.

---

### ✅ 2. Intersection with Duplicates

* Use a **hash map** to store the frequency of elements in one array.
* Traverse the second array:

  * If the element exists in the map with frequency > 0, add it to result and decrement its count.

**Use case**: Track how many times items overlap in two sequences, including repetitions.

---

## 💡 Example

Given:

```text
arr1 = [1, 2, 2, 3]
arr2 = [2, 2, 4]
```

* **Unique Intersection**: `[2]`
* **Intersection with Duplicates**: `[2, 2]`

---

## ⏱️ Time Complexity

* **Using HashSet/HashMap**: `O(n + m)`
* Where `n` and `m` are the sizes of the two arrays.

---

## 📦 Space Complexity

* **O(n)**: For storing elements of one array in a hash-based structure.

---
