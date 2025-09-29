 
---

## 📌 Finding Indices of a Key in an Array (Using Recursion)

This Java program is designed to **find all occurrences of a specific key in an array using recursion**. It prints the **indices** where the key is found.

---

### 📋 Description

The program defines a recursive method that:

* Takes the array, the key to search for, and the current index as input.
* Checks each element one by one recursively.
* Prints the index whenever the key matches the current element.

---

### 🧠 Core Logic

* If the current index equals the length of the array, recursion stops (base case).
* If the element at the current index matches the key, its index is printed.
* The function then calls itself recursively for the next index.

> Note: Although using `++index` in the recursive call works, using `index + 1` is more readable and avoids side effects.

---

### 🧪 Sample Input

Array: `{3, 2, 4, 5, 6, 2, 7, 2, 2}`
Key: `2`

### ✅ Output

The output will be the indices where the key is found:
`1 5 7 8`

---

### 🔧 How to Run

1. Save the file with a `.java` extension.
2. Compile and run it using any Java compiler or IDE.

---

### 📚 Concepts Used

* **Recursion**
* **Array Traversal**
* **Base and Recursive Case Design**
* **Index Tracking**

---
 