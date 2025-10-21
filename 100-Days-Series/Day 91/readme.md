
---

# 🔢 Catalan Numbers Generator (Java)

## 📌 Description

This Java program prints the first `n` **Catalan numbers** using the mathematical formula involving factorials.

---

## 📚 Theory

### 🔸 What are Catalan Numbers?

Catalan numbers are a **sequence of natural numbers** that appear in many **combinatorial problems**, such as:

* Counting the number of valid combinations of parentheses
* Counting the number of binary search trees with `n` nodes
* Counting the number of ways to triangulate a polygon
* Number of Dyck words of length `2n`, etc.

---

### 🔹 Formula for Catalan Number

The **nth Catalan number** is given by the formula:

$$
C_n = \frac{(2n)!}{(n+1)! \cdot n!}
$$

Where:

* `(2n)!` is the factorial of `2n`
* `(n+1)!` and `n!` are factorials of `n+1` and `n`

---

## 🔁 Logic in the Program

1. The user inputs the number `n`, representing how many Catalan numbers to generate.
2. For each term from `0` to `n-1`, the program calculates the Catalan number using the factorial formula.
3. Factorial is calculated using a recursive method.
4. Each Catalan number is printed in sequence.

---

## 💡 Example

**Input:**

```
Enter the number of terms (N) : 5
```

**Output:**

```
Catalan Numbers up to 5 terms : 
1 1 2 5 14
```

---

## 🧠 Note on Factorials

The program uses **recursive factorial computation**. While fine for small `n`, it can lead to **stack overflow** or **integer overflow** for large `n`. For larger computations, it's better to use `long` type or `BigInteger`.

---
 