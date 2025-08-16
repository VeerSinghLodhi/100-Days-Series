
---

## 📚 Merging Two Arrays — Theory & Logic

Merging two arrays means combining their elements into a single array. This is a foundational concept used in data manipulation, sorting algorithms, and various real-world applications like merging user data, search results, or sensor inputs.

---

### 🔍 Types of Merging

#### 1. **Simple Merge**

* **Definition**: Directly combining two arrays by placing the second array after the first.
* **Use Case**: When order doesn't matter or you're not dealing with sorted arrays.

#### 2. **Sorted Merge**

* **Definition**: Combining two **sorted** arrays into a **single sorted** array.
* **Use Case**: Used in algorithms like **Merge Sort** or when merging sorted datasets.

---

### 🧠 Logic for Merging Arrays

#### ✅ **Simple Merge Logic**:

1. Create a new array with size equal to the sum of lengths of both arrays.
2. Copy all elements from the first array to the new array.
3. Copy all elements from the second array to the new array **after** the last element of the first.
4. Final array contains all elements in order: `[...arr1, ...arr2]`.

---

#### ✅ **Sorted Merge Logic**:

1. Create a new array to hold the merged elements.
2. Initialize two pointers: one for each array.
3. Compare current elements of both arrays:

   * Add the **smaller** element to the new array.
   * Move the pointer of the array from which the element was picked.
4. Repeat until one array is fully traversed.
5. Copy any **remaining** elements from the other array to the new array.
6. Final array is **sorted and merged**.

---

### ⏱ Time & Space Complexity

| Type         | Time Complexity | Space Complexity |
| ------------ | --------------- | ---------------- |
| Simple Merge | O(n + m)        | O(n + m)         |
| Sorted Merge | O(n + m)        | O(n + m)         |

`n` and `m` = lengths of the two arrays.

---

### 💡 Real-World Applications

* Merging two datasets (like logs or reports)
* Combining search results
* Implementing **Merge Sort**
* Merging calendar events or media playlists

---

