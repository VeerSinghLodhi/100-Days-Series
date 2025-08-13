To convert a decimal number to binary, you divide the number by 2 repeatedly and note the remainders. The binary number is the sequence of remainders read in reverse order (bottom to top).
---

### 🔁 **Step-by-Step Method (Division by 2 Method):**

1. **Start with a decimal number.**
   This is a number in base 10 (e.g., 13).

2. **Divide the number by 2.**
   Write down the **quotient** and the **remainder**.

3. **Repeat the division** using the **quotient** as the new number.
   Keep recording the remainders.

4. **Stop when the quotient becomes 0.**

5. **Read the remainders in reverse order (from bottom to top).**
   That’s the **binary number**.

---

### ✅ Example: Convert **25** to binary

| Division Step | Quotient | Remainder |
| ------------- | -------- | --------- |
| 25 ÷ 2 = 12   | 12       | 1         |
| 12 ÷ 2 = 6    | 6        | 0         |
| 6 ÷ 2 = 3     | 3        | 0         |
| 3 ÷ 2 = 1     | 1        | 1         |
| 1 ÷ 2 = 0     | 0        | 1         |

📌 **Binary** = Read remainders from bottom to top: `11001`

---

### 📌 Why does this work?

* Binary is **base 2**, meaning each digit represents a power of 2.
* This method essentially breaks the decimal number into sums of powers of 2.

