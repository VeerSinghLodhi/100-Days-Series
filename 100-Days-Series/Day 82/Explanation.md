**Finding Indices of an Element**

This program identifies and prints all indices where a given key is found within an array using recursion. It eliminates the need for iterative loops, relying instead on a recursive approach.

---

### ✨ How It Works:
1. **Array and Key:**
   - The program uses a predefined array and a key to search for.
2. **Recursive Search:**
   - A recursive function iterates through the array by incrementing the index on each call.
   - When the key matches an element in the array, the index is printed.
3. **Termination Condition:**
   - The recursion stops when the index exceeds the length of the array.

---

### 📌 Key Features:
- Recursive approach eliminates the need for explicit loops.
- Handles multiple occurrences of the key efficiently.
- Simplified and structured code.

---

### ✅ Example:
#### Input:
```
Array: [3, 2, 4, 5, 6, 2, 7, 2, 2]
Key: 2
```
#### Output:
```
1 5 7 8
```

---

### 🛠️ Logic Explanation:
1. **Base Case:**
   - If the current index equals the length of the array, terminate the recursion.
2. **Key Match:**
   - Check if the current element matches the key.
   - If true, print the index.
3. **Recursive Call:**
   - Increment the index and call the function again to process the next element.

---

### 🚀 How to Run the Program:
1. Save the code to a file.
2. Compile and run the program.
3. Observe the output displaying indices of all occurrences of the key.

---

### 📚 Learnings:
- Applying recursion for array traversal.
- Managing base cases to prevent infinite recursion.
- Simplifying iterative processes with recursive logic.

---

### 🙌 Want to Try More?
Modify the program to:
1. Return the indices as a list or array instead of printing them.
2. Search for keys in multi-dimensional arrays.
3. Handle edge cases such as an empty array or a key not present in the array.

Enjoy coding! 🎉
