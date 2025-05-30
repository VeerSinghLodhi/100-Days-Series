**Binary Search Algorithm**

This program demonstrates the Binary Search algorithm to efficiently find the position of a target value within a sorted array. It reduces the search space by half in each step, achieving logarithmic time complexity.

---

### ✨ How It Works:
1. **Array and Key:**
   - The program works with a sorted array and a target key.
2. **Binary Search Logic:**
   - The search begins by comparing the middle element of the current search range with the key.
   - Depending on the comparison result:
     - If the middle element matches the key, its index is returned.
     - If the key is greater, the search continues in the right half.
     - If the key is smaller, the search continues in the left half.
3. **Termination:**
   - The search ends when the key is found or the search range is exhausted.

---

### 📌 Key Features:
- Efficient for large datasets with O(log n) time complexity.
- Works only on sorted arrays.
- Handles cases where the key is not present gracefully.

---

### ✅ Example:
#### Input:
```
Array: [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]
Key: 6
```
#### Output:
```
Found at 5
```
#### Input:
```
Array: [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]
Key: 11
```
#### Output:
```
Not Found!!
```

---

### 🛠️ Logic Explanation:
1. **Initialization:**
   - Start with `left = 0` and `right = array length - 1`.
2. **Mid Calculation:**
   - Compute `mid = left + (right - left) / 2` to avoid overflow.
3. **Comparison:**
   - Check if the element at `mid` matches the key.
   - If not, adjust `left` or `right` to narrow down the search range.
4. **Repeat:**
   - Continue until `left > right` or the key is found.

---

### 🚀 How to Run the Program:
1. Save the code to a file.
2. Compile and execute the program.
3. Modify the array and key values as needed.
4. Observe the output indicating the key's position or its absence.

---

### 📚 Learnings:
- Understanding the binary search algorithm.
- Efficiently handling sorted data.
- Using iterative approaches to solve problems.

---

### 🙌 Want to Try More?
Modify the program to:
1. Implement a recursive version of Binary Search.
2. Handle arrays sorted in descending order.
3. Count the occurrences of the key in the array.

Enjoy coding! 🎉
