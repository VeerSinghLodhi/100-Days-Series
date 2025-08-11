

---

## 📊 Sum of a Specific Row in a 2D Array – Java

This program demonstrates how to **calculate the sum of a specific row** in a **2D array** (also known as a matrix) using Java.

---

### ✅ Problem Statement

Given a 2D array of integers (a matrix), write a program to compute the **sum of elements in a specific row** identified by its index.

---

### 🧠 Core Concept

* A **2D array** is an array of arrays, where each element of the outer array is a row.
* To access a particular row, use the row index: `nums[rowIndex]`
* The sum of the elements in that row can be calculated using a **for-each loop**.

---

### 💡 Logic Breakdown

1. Define a 2D integer array.
2. Choose a specific row using its index (`targetRow`).
3. Initialize a `sum` variable.
4. Use a for-each loop to iterate over the row and accumulate the sum.
5. Print the result.

---


*(Note: Output row is labeled as 2 for human-readable format, even though its index is 1)*

---

### 🧾 Time & Space Complexity

| Complexity | Value                                              |
| ---------- | -------------------------------------------------- |
| Time       | O(n) – where n is the number of columns in the row |
| Space      | O(1) – constant extra space                        |

---

### 🔍 Use Cases

* Working with tabular data (like spreadsheets)
* Processing matrix-based data in games or simulations
* Summing marks, prices, or values stored row-wise

---
 