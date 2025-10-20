# Count Even and Odd Numbers

This Java program counts the number of **even** and **odd** numbers in a given array of integers.

---

## 📚 What Does the Program Do?

1. Prompts the user to input the size of an array.
2. Accepts the elements of the array from the user.
3. Calculates and prints:
   - The count of **even numbers** in the array.
   - The count of **odd numbers** in the array.

---

## 🧠 How the Program Works

1. **Input**:
   - The user specifies the size of the array.
   - The user enters each element of the array.
2. **Logic**:
   - Iterates through the array.
   - Checks whether each element is even or odd using the modulo operator (`%`).
   - Updates the counts of even and odd numbers accordingly.
3. **Output**:
   - Displays the counts of even and odd numbers.

---

## 📝 Code Explanation

### `getCountEvenOdd(int[] arr)`
- **Input:** An array of integers.
- **Output:** Prints the count of even and odd numbers in the array.
- **Logic:**
  - If `arr[i] % 2 == 0`, the number is even, and the even count is incremented.
  - Otherwise, the number is odd, and the odd count is incremented.

### `main(String[] args)`
- Reads the size of the array and its elements from the user.
- Calls `getCountEvenOdd` to compute and display the counts.

---

## 💻 Example Input and Output

### Input:

- Enter the size of the array: 5
- Enter the elements of the array:
- Enter 1 element: 10
- Enter 2 element: 15
- Enter 3 element: 8
- Enter 4 element: 21
- Enter 5 element: 14

- 
### Output:

- Even Numbers: 3
- Odd Numbers: 2

- 
---

## 🔗 Applications

- Useful in basic data analysis.
- Can be adapted for more complex operations like processing large datasets.

---

## 🚀 How to Run

1. Copy the code into a file named `CountEvenOdd.java`.
2. Compile the program using:
   ```bash
   javac CountEvenOdd.java
   java CountEvenOdd.
