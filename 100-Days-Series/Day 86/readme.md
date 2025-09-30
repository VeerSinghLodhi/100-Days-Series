 
---

## 📘 Print Even and Odd Indices in Java — Program Explanation

### 🔍 **What the Program Does:**

This Java program takes an array of integers and prints the elements:

* At **even indices** (like index 0, 2, 4, ...)
* At **odd indices** (like index 1, 3, 5, ...)

> ⚠️ Note: **"Even/Odd indices"** refers to the index positions (0-based), not the values in the array.

---

### 💡 **Program Structure:**

1. **`getPrintEvenIndices(int arr[])`**

   * Loops through the array
   * Prints elements where index `i % 2 == 0`

2. **`getPrintOddIndices(int arr[])`**

   * Loops through the array
   * Prints elements where index `i % 2 != 0`

3. **`main()`**

   * Defines an array
   * Calls both methods to print even-indexed and odd-indexed elements.

---

### 💻 **Code Output Example:**

For this array:

```java
int arr[] = {1,2,3,4,5,6,7,8,9,10};
```

**Output:**

```
Even Indices Printing..
1 3 5 7 9 
Odd Indices Printing..
2 4 6 8 10 
```

---

### 📌 **Key Concepts Covered:**

* Array traversal with `for` loop
* Using modulo operator `%` to check index parity
* Method calling and modular code design

---

### ✅ **Why This Is Useful:**

* Helps you understand **array indexing**
* A good intro to writing **modular code** in Java
* Can be extended to:

  * Print even/odd values instead of indices
  * Work with strings or other data types

---

### 📚 Bonus Tip:

If you want to print **even/odd values** instead of indices, modify the condition like:

```java
if (arr[i] % 2 == 0) // for even values
```

---
 