 
---

## 📄 **Program: Count Occurrences in a 2D Array (Java)**

### ✅ **Objective:**

This Java program counts how many times a specific number appears in a **2D array**.

---

### 🔍 **Overview:**

* The program defines a method `getCountOccurrence()` that accepts a 2D array and a number.
* It iterates through all elements of the array to count how many times the given number appears.
* The user is prompted to enter a number, and the result is printed.

---

### 🧠 **Key Concepts Used:**

1. **2D Arrays**: Array with rows and columns (matrix-like structure).
2. **Loops**: Nested `for` loops are used to access every element.
3. **Method Creation**: A static method is used to encapsulate the counting logic.
4. **User Input**: `Scanner` is used to take input from the user.

---

### 🧾 **Method Explanation:**

```java
public static int getCountOccurrence(int arr[][], int numberToSearch)
```

* **Parameters**:

  * `arr[][]`: The 2D array of integers.
  * `numberToSearch`: The number whose frequency we want to find.
* **Logic**:

  * Loop through each row and column.
  * Compare each element with `numberToSearch`.
  * If it matches, increase the `count`.
* **Returns**:

  * The total number of times the number occurs in the array.

---

### 🖥️ **Sample Array Used**:

```java
int [][] arr = {
    {4, 7, 8},
    {8, 8, 7},
    {1, 7, 9}
};
```

--- 
### 📌 **Use Cases:**

* Counting frequency of elements in matrix-based problems.
* Useful in games (e.g., minesweeper), image processing (pixel analysis), etc.

---
 