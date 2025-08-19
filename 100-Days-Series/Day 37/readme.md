
---

# 🧹 Remove Spaces from a String

## 📖 Theory

A **string** is a sequence of characters. Sometimes, especially when handling user input or text data, we may need to **remove all spaces** from the string. This can include:

* **Single spaces** between words
* **Leading or trailing spaces**
* **All whitespace characters**, depending on the use case

Removing spaces helps in **data normalization**, **string comparison**, and **clean formatting**.

---

## 🔍 Logic

1. **Initialization**:

   * Start with an empty result string (or use the same string if modifying in-place).

2. **Traversal**:

   * Go through each character of the input string one by one.
   * For each character:

     * Check if the character is a space (i.e., `' '`).
     * If **not** a space, add it to the result.

3. **Result**:

   * After traversing the string, the result will be the same string **without any spaces**.

---

## 💡 Example

Given:
`"Hello World"`
Expected Output:
`"HelloWorld"`

Given:
`"  Data   Science "`
Expected Output:
`"DataScience"`

---

## ⏱️ Time Complexity

* **O(n)**: Linear time, where `n` is the number of characters in the string.

## 📦 Space Complexity

* **O(n)**: If a new string is created to store the result.
* **O(1)**: If the operation is done in-place (language-dependent).

---
 