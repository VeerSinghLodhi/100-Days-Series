
---

# 💠 Armstrong Number using Recursion

This project explains the **theory and recursive logic** behind checking whether a number is an **Armstrong number**.

---

## 📘 What is an Armstrong Number?

An **Armstrong number** (also known as a narcissistic number) is a number that is **equal to the sum of its own digits raised to the power of the number of digits**.

### Example:

* **153** → 1³ + 5³ + 3³ = 153 ✔️
* **9474** → 9⁴ + 4⁴ + 7⁴ + 4⁴ = 9474 ✔️
* **123** → 1³ + 2³ + 3³ = 36 ≠ 123 ❌

---

## 🧠 Logic Used

### 1. **Count the Digits (Recursive Step 1)**

To check if a number is Armstrong, we first **count how many digits** the number has. This can be done by:

* Recursively dividing the number by 10.
* Adding 1 for each division until the number becomes 0.

### 2. **Calculate the Sum of Powered Digits (Recursive Step 2)**

Next, calculate the **sum of each digit raised to the total number of digits**:

* Extract the last digit using modulo (`% 10`).
* Raise it to the power of the total number of digits.
* Recursively repeat this for the remaining number (after removing the last digit).

### 3. **Compare**

* If the **sum of powered digits** is equal to the **original number**, it's an **Armstrong number**.
* Otherwise, it is **not**.

---

## 🔄 Recursive Flow (Example for 153)

* **Digits Count:**
  153 → count = 3

* **Power Sum (Recursively):**
  (3³) + (5³) + (1³) = 27 + 125 + 1 = **153**

* **Result:**
  153 == 153 → ✔️ Armstrong Number

---

## 📚 Key Concepts

* **Recursion**
* **Number manipulation**
* **Power calculation**
* **Digit extraction and reduction**

---

## ✅ Applications

* Used in coding practice to understand recursion and digit-based problems.
* Useful in technical interviews to demonstrate logical thinking and recursion handling.

---

