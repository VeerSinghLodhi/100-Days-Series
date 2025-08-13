
**Binary to Decimal Conversion**

Binary is a number system that uses only two digits: 0 and 1. Each digit represents a power of 2, starting from the rightmost bit (which is 2⁰).

To convert a binary number to decimal, multiply each bit by 2 raised to the power of its position (starting from 0 on the right), and then sum all the results.

**Formula:**
Decimal = b₀ × 2⁰ + b₁ × 2¹ + b₂ × 2² + ... + bₙ × 2ⁿ

---

**Example:**
Convert binary `1011` to decimal:

```
= (1 × 2³) + (0 × 2²) + (1 × 2¹) + (1 × 2⁰)  
= (1 × 8) + (0 × 4) + (1 × 2) + (1 × 1)  
= 8 + 0 + 2 + 1  
= 11
```

So, binary `1011` equals decimal **11**.

---

**Tip:**

* Start counting positions from **right to left**.
* Only add the powers of 2 where the binary digit is **1**.

---

