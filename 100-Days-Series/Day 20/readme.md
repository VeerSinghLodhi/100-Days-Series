

## 📘 Factorial Using Recursion – README

### 📌 What is Factorial?

The **factorial** of a non-negative integer `n` is the product of all positive integers less than or equal to `n`.

Mathematically:

```
n! = n × (n-1) × (n-2) × ... × 1
```

Example:

```
5! = 5 × 4 × 3 × 2 × 1 = 120
```

By definition:

```
0! = 1
```

---

### 🧠 What is Recursion?

Recursion is a programming technique where a function calls itself to solve smaller instances of the same problem.

---

### 💡 Logic (Recursive Formula)

To compute factorial recursively:

```text
factorial(n) = n × factorial(n - 1)
```

Base Case:

```text
factorial(0) = 1
```

---

### 🛠️ Steps (in code):

1. Define a function `factorial(n)`.
2. If `n` is 0 or 1 → return 1.
3. Otherwise → return `n * factorial(n - 1)`.

---

### ✅ Sample Output

Input:

```
Enter a number: 5
```

Output:

```
Factorial of 5 is: 120
```

