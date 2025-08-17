

```markdown
# 🔢 LCM (Least Common Multiple) Calculator

## 📘 What is LCM?

The **Least Common Multiple (LCM)** of two or more integers is the **smallest positive integer** that is **divisible by all** of the given numbers without leaving a remainder.

### Example:
- LCM of `4` and `5` is `20`
- LCM of `6` and `8` is `24`

---

## 🧠 Logic Behind LCM Calculation

There are multiple methods to find the LCM of two numbers:

---

### 1. **Using Formula with HCF (Most Efficient)**

The most common and efficient method to calculate LCM:

\[
\text{LCM}(a, b) = \frac{a \times b}{\text{HCF}(a, b)}
\]

- First, calculate the **HCF (Highest Common Factor)** of the two numbers using the Euclidean algorithm.
- Then, apply the above formula.

#### Example:
For `a = 12`, `b = 18`:
- HCF = 6
- LCM = (12 × 18) / 6 = 216 / 6 = **36**

---

### 2. **Prime Factorization Method**
- Break both numbers into prime factors.
- Take all prime factors, using the **highest powers** found in any of the numbers.
- Multiply them to get the LCM.

#### Example:
- `12 = 2² × 3`
- `18 = 2 × 3²`
- LCM = `2² × 3² = 36`

---

### 3. **Brute Force (Inefficient)**
- Start from the larger of the two numbers.
- Keep checking successive multiples until you find one divisible by both numbers.

> Not recommended for large inputs due to performance limitations.

---

## 📌 Use Cases
- Finding common time intervals
- Scheduling problems
- Mathematics and computer algorithms involving multiples

---

## 🧾 Note
This project focuses only on understanding and documenting the **theory and logic** behind LCM calculation. Code implementations may be added in further updates.

```

--- 
