
---

```markdown
# HCF (Highest Common Factor) Calculator

## 📘 What is HCF?

The **Highest Common Factor (HCF)**, also known as the **Greatest Common Divisor (GCD)**, of two or more integers is the **largest positive integer** that divides all the given numbers without leaving a remainder.

For example:
- HCF of `12` and `18` is `6`
- HCF of `8`, `16`, and `32` is `8`

---

## 🧠 Logic Behind HCF Calculation

There are multiple ways to calculate the HCF, but the most common ones include:

### 1. **Prime Factorization Method**
- Factor each number into its prime factors.
- Identify the common prime factors.
- Multiply the lowest powers of the common primes.

**Example**:  
`12 = 2^2 × 3`  
`18 = 2 × 3^2`  
Common prime factors = `2` and `3`  
HCF = `2^1 × 3^1 = 6`

---

### 2. **Euclidean Algorithm**
This is a more efficient method especially for larger numbers.

**Steps**:
1. Divide the larger number by the smaller number.
2. Replace the larger number with the smaller number, and the smaller number with the remainder.
3. Repeat the process until the remainder is `0`.
4. The last non-zero remainder is the HCF.

**Example**:  
Find HCF of `48` and `18`  
```

48 ÷ 18 = 2 remainder 12
18 ÷ 12 = 1 remainder 6
12 ÷ 6 = 2 remainder 0
\=> HCF = 6

```

---

## 📌 Use Cases
- Simplifying fractions
- Cryptographic algorithms
- Mathematical computations in software development

---

## 🧾 Note
This project focuses only on understanding and documenting the **theory and logic** behind HCF calculation. No code is included in this version.

```

---
 