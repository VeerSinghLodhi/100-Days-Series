 
---

# 📘 Finding Maximum and Minimum in an Array

## 📖 Theory

An **array** is a collection of elements stored at contiguous memory locations. To determine the **maximum** and **minimum** value in an array, we must traverse the array and compare each element with our current known maximum and minimum values.

This is a fundamental operation in programming and is commonly used in problems related to statistics, data analysis, and algorithm optimization.

---

## 🔍 Logic

1. **Initialization**:

   * Assume the first element of the array is both the maximum and the minimum.
   * Store them in two variables: `max` and `min`.

2. **Traversal**:

   * Iterate through the array starting from the second element.
   * For each element:

     * Compare it with `max`:

       * If it is greater than `max`, update `max`.
     * Compare it with `min`:

       * If it is smaller than `min`, update `min`.

3. **Result**:

   * After traversing the array, `max` will hold the largest value and `min` will hold the smallest value.

---

## 💡 Example

For an array:
`[12, 5, 8, 19, 2, 7]`

* Start with `max = 12`, `min = 12`
* Traverse and compare each element:

  * 5 → update `min` to 5
  * 8 → no change
  * 19 → update `max` to 19
  * 2 → update `min` to 2
  * 7 → no change

**Final Output**:
`Max = 19`, `Min = 2`

---

## ⏱️ Time Complexity

* **O(n)**: Linear time, where `n` is the number of elements in the array.
* Each element is visited only once.

## 📦 Space Complexity

* **O(1)**: Constant space; only two variables (`max`, `min`) are used regardless of input size.

---

 