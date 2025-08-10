
---

## 📘 Program: Find Two Numbers with Target Sum

### 🔍 Description

This Java program searches for two numbers in an array whose sum equals a given target value. If such a pair exists, it prints their indices; otherwise, it prints "No Solution Found".

---

### 🧠 Logic / Theory

* The method `getFind` takes an array and a target number.
* It uses two loops:

  * The outer loop picks one number at a time.
  * The inner loop compares it with every next number in the array.
* For each pair, it checks if their sum equals the target.
* If a valid pair is found, it prints the indices of those two numbers and exits.
* If no such pair is found after checking all possibilities, it prints "No Solution Found".

---

### ✅ Example

If the input array is: 2, 5, 6, 8, 10, 23
And the target is: 11
Then the output will be: Indices : 1, 2
Because 5 (at index 1) and 6 (at index 2) add up to 11.

---

 