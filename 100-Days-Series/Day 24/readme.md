
---

## 🧮 Perfect Number – Theory

### 🔹 What is a Perfect Number?

A **Perfect Number** is a **positive integer** that is **equal to the sum of its proper divisors**, excluding the number itself.

> In other words, a number `n` is perfect if:
> **sum of its proper divisors = n**

---

### 🔸 Example:

#### ✅ 28 is a Perfect Number

* Divisors of 28: `1, 2, 4, 7, 14` (excluding 28)
* Sum of divisors: `1 + 2 + 4 + 7 + 14 = 28`
* ✅ 28 is perfect!

---

### 🔸 Other Examples:

* **6** → `1 + 2 + 3 = 6`
* **28** → `1 + 2 + 4 + 7 + 14 = 28`
* **496** → `1 + 2 + 4 + 8 + 16 + 31 + 62 + 124 + 248 = 496`

---

### 🔹 General Properties

* Perfect numbers are **rare**.
* All known **even perfect numbers** can be represented as:

  ```
  2^(p−1) × (2^p − 1)
  ```

  where both `p` and `2^p − 1` are **prime numbers** (Mersenne primes).
* No **odd perfect number** has been found (as of now).

---

### 🔹 Algorithm to Check Perfect Number

1. Take input `n`
2. Loop from `1` to `n/2`
3. Add all numbers that divide `n` without a remainder
4. If the sum equals `n`, it's a perfect number

---

### 📌 Use Cases / Applications

* Used in number theory
* Useful in coding interviews for practicing **loops**, **conditions**, and **mathematical logic**

---

