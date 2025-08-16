
---

## 🔢 Power of a Number – Theory

### 🔹 What is "Power of a Number"?

The **power** (or exponentiation) of a number refers to the process of **multiplying a number by itself** a certain number of times.

> In mathematical terms:
> **a^b** = a × a × a × ... (b times)

* `a` is the **base**
* `b` is the **exponent** or **power**
* The result is called the **power value**

---

### 🔸 Examples

| Expression | Meaning          | Result |
| ---------- | ---------------- | ------ |
| 2^3        | 2 × 2 × 2        | 8      |
| 5^0        | Any number^0 = 1 | 1      |
| 3^4        | 3 × 3 × 3 × 3    | 81     |

---

### 🔹 Properties of Exponents

* **a^0 = 1** (where a ≠ 0)
* **a^1 = a**
* **a^b × a^c = a^(b+c)**
* **(a^b)^c = a^(b×c)**
* **a^(-b) = 1 / a^b**

---

### 🔸 Use Cases

* Scientific calculations
* Computer algorithms (e.g., binary exponentiation)
* Financial modeling (compound interest)
* Cryptography

---

### 🔹 Algorithm to Calculate Power (a^b)

1. Initialize result as 1
2. Loop from 1 to `b`
3. Multiply result by `a` in each iteration
4. Return result

---

### 📌 Optimized Approach (Fast Exponentiation / Binary Exponentiation)

* Reduces time complexity from **O(b)** to **O(log b)**
* Very useful in competitive programming

---
