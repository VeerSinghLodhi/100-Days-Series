
---

## 📄 **Program: Check for Duplicates in an Array (Java)**

### ✅ \*\*Objective:

To determine whether a given array contains any duplicate elements.\*\*

---

### 🔍 **Overview:**

* The program sorts the array using **Bubble Sort**.
* After sorting, it checks for any **consecutive duplicate elements**.
* It returns `true` if duplicates are found, otherwise `false`.

---

### 🧠 **Key Concepts Used:**

1. **Bubble Sort**: A simple sorting algorithm that repeatedly swaps adjacent elements if they are in the wrong order.
2. **Duplicate Check**: After sorting, duplicates (if any) will be next to each other.
3. **Boolean Return**: The method returns `true` if a duplicate exists; otherwise `false`.

---

### 🔧 **Method Details:**

```java
public static boolean getCheck(int arr[])
```

* **Input**: An integer array `arr[]`.
* **Process**:

  1. Sort the array using bubble sort.
  2. Traverse the sorted array to compare each element with its next neighbor.
* **Output**: `true` if duplicate found, otherwise `false`.

---

### 💡 **Why Sorting First?**

Sorting makes it easy to find duplicates because all identical values will be next to each other in the array. This eliminates the need for nested loops or HashSets in simpler implementations.

---

### 🧾 **Arrays Used in Main:**

```java
int arr1[] = {1, 2, 3, 1};           // Duplicate: 1
int arr2[] = {1, 2, 3, 4};           // No duplicates
int arr3[] = {1, 1, 1, 3, 3, 4, 2, 4, 2};  // Multiple duplicates
```

---

### 🖥️ **Sample Output:**

```
Result 1 : true
Result 1 : false
Result 1 : true
```

> **Note**: All outputs are labeled "Result 1" – this is a small typo in the print statements and should ideally be `"Result 2"` and `"Result 3"` for clarity.

---

### ⚙️ **Time Complexity:**

* **Bubble Sort**: O(n²)
* **Duplicate Check (Post-Sort)**: O(n)
* **Total**: O(n²) (Not optimal for large arrays)

---

### 🚀 **Improvements (Optional for Advanced Version):**

* Use a **HashSet** for faster duplicate detection (O(n) time, O(n) space).
* Use **Arrays.sort()** instead of manual bubble sort for cleaner code.

---
 