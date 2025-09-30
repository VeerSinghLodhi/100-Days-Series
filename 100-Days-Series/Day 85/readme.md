 
---

## 📘 Sum of Squares of First N Natural Numbers — Java Program

### 🔍 **What the Program Does:**

This Java program calculates the **sum of squares** of the first `n` natural numbers using a **mathematical formula**.

---

### 🧠 **Mathematical Concept:**

The sum of squares of the first `n` natural numbers is:

$$
1^2 + 2^2 + 3^2 + \dots + n^2 = \frac{n(n + 1)(2n + 1)}{6}
$$

This formula helps compute the sum efficiently in **O(1)** time (constant time), without using a loop.

---

### 💻 **How the Program Works:**

1. Takes user input `n` using the `Scanner` class.
2. Applies the formula:

   ```java
   int sum = (n * (n + 1) * (2 * n + 1)) / 6;
   ```
3. Prints the result.

---

### 🧾 **Example Output:**

```
Enter the value of N : 3
Sum of Series : 14
```

Explanation:

$$
1^2 + 2^2 + 3^2 = 1 + 4 + 9 = 14
$$

---

### 🔧 **Advantages of Using the Formula:**

* **Faster:** No loop required.
* **Simple:** Easy to implement.
* **Accurate:** Based on proven math.

---

### ✅ **Use Cases:**

* Quick calculations in math or stats applications.
* Competitive programming or coding interviews.

---
 