

# 🧠 Remove Duplicates from an Array – Theoretical Overview

## 📌 Objective

To **remove duplicate elements** from an array, ensuring that each element appears only once.

---

## 🤔 Why Remove Duplicates?

* To clean and standardize data
* To prepare for operations that require unique elements (e.g., set operations)
* To improve performance and reduce redundancy in storage and processing

---

## 🛠️ General Approaches

### 1. **Using a Set / Hash Structure**

* **Concept**: Sets store only unique values.
* **How**:

  * Iterate over the array.
  * Insert each element into a Set.
  * Collect the unique values from the Set.
* **Order**: May or may not be preserved (depends on language or data structure).

### 2. **Using a Temporary List + Manual Check**

* **Concept**: Manually ensure uniqueness.
* **How**:

  * Create a new empty list.
  * For each element in the original array:

    * If it is **not already** in the new list, add it.
* **Order**: Preserved.

### 3. **Sorting + Removing Adjacent Duplicates**

* **Concept**: Duplicates will be adjacent in a sorted array.
* **How**:

  * Sort the array.
  * Iterate through and keep only elements that differ from the previous one.
* **Order**: Not preserved (because of sorting), but efficient for large arrays.

---

## ⏱️ Time and Space Complexity (Varies by Approach)

| Approach                   | Time Complexity | Space Complexity |
| -------------------------- | --------------- | ---------------- |
| Set/Hash-based             | O(n)            | O(n)             |
| Manual check with list     | O(n²)           | O(n)             |
| Sorting + adjacent compare | O(n log n)      | O(n) or O(1)     |

---

## ✅ Key Takeaways

* Use a **Set** for simplicity and speed (if order doesn't matter).
* Use a **loop with manual check** when **order matters**.
* Use **sorting** when performance is a concern and order doesn't matter.

---
