 
---

## 🔍 Search Insert Position – Java Implementation

This program demonstrates a classic **Binary Search** approach to solve the **"Search Insert Position"** problem. It is commonly asked in coding interviews and platforms like LeetCode.

---

### 🧠 Problem Statement

Given a **sorted array of distinct integers** and a **target value**, return the index if the target is found.
If not, return the **index where it would be if it were inserted** in order.

---

### 🧮 Example

```java
Input:  nums = [1,3,5,6], target = 7  
Output: 4  
```

Explanation: Since `7` is greater than all elements, it would be inserted at the end — index 4.

---

### 🔧 Logic Used

* We use **Binary Search** since the input array is sorted.
* The search space is reduced by half each time (`O(log n)` time complexity).
* If the target is **greater** than the largest element, return `high + 1` (insert at the end).
* If the target is **found**, return its index.
* If not found, return the index `low` which points to the correct insert position.

---

### 🧩 Algorithm Steps

1. Initialize `low = 0` and `high = array.length - 1`
2. If `target > arr[high]`, return `high + 1`
3. While `low <= high`:

   * Find `mid = (low + high) / 2`
   * If `target == arr[mid]` → return `mid`
   * If `target < arr[mid]` → move `high = mid - 1`
   * Else → move `low = mid + 1`
4. Return `low` as the correct insert position.

---

### 💻 Code Structure

* **Method:** `getSearchInsertPosition(int[] nums, int target)`
* **Main Method:** Demonstrates usage with sample input

---

### 🧾 Time & Space Complexity

| Complexity | Value                  |
| ---------- | ---------------------- |
| Time       | O(log n)               |
| Space      | O(1) - In-place search |

---

### 📌 Use Case

This logic is widely used in:

* Auto-suggestion systems
* Pagination
* Real-time filtering/searching systems

---
 