 
---

# 🧾 Zero-One Triangle Pattern in Java

## 📌 Pattern Description

The **Zero-One Triangle** is a number pattern where each row contains alternating values of `0` and `1`. The key idea is to change the starting digit based on the row number:

* **Odd-numbered rows** start with `1`
* **Even-numbered rows** start with `0`
* The remaining digits in each row alternate accordingly

## 🔍 Output Example (for `n = 5`)

```
1
0 1
1 0 1
0 1 0 1
1 0 1 0 1
```

## 🛠️ Logic Breakdown

* The pattern is made using two nested loops:

  * Outer loop: controls the number of rows
  * Inner loop: prints the values in each row
* A variable (`start`) decides whether the row begins with `1` or `0`:

  * If the row index is even, it starts with `0`
  * If the row index is odd, it starts with `1`
* The printed value alternates with each step in the row.

## 📘 Use Cases

* Helps understand **nested loops** and **conditional logic**
* Frequently used in **pattern-based questions** in interviews
* Great for **beginners** to practice **loop flow control**

---
 