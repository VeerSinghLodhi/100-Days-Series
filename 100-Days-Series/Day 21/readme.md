

## 📘 Fibonacci Series Using Recursion – README

### 📌 What is the Fibonacci Series?

The **Fibonacci series** is a sequence of numbers where:

```
F(0) = 0  
F(1) = 1  
F(n) = F(n - 1) + F(n - 2) for n ≥ 2
```

So, the first few Fibonacci numbers are:

```
0, 1, 1, 2, 3, 5, 8, 13, 21, ...
```

---

### 🧠 What is Recursion?

**Recursion** is a method where a function calls itself to solve smaller subproblems.

---

### 💡 Recursive Formula

To generate the nth Fibonacci number recursively:

```text
fib(n) = fib(n - 1) + fib(n - 2)
```

**Base Cases:**

```text
fib(0) = 0  
fib(1) = 1
```

---

### 🔁 How It Works

* If `n` is 0 → return 0
* If `n` is 1 → return 1
* Otherwise → return the sum of the previous two Fibonacci numbers

---

### 🛠️ Steps (in code):

1. Define a function `fibonacci(n)`
2. Add base cases: if `n == 0`, return 0; if `n == 1`, return 1
3. Else, return `fibonacci(n - 1) + fibonacci(n - 2)`
4. Print the series up to `n` terms by calling this function repeatedly

---

### ✅ Sample Output

Input:

```
Enter number of terms: 7
```

Output:

```
Fibonacci Series:
0 1 1 2 3 5 8
```

---


| n | Fibonacci(n) | Formula Used        |
| - | ------------ | ------------------- |
| 0 | 0            | Base Case           |
| 1 | 1            | Base Case           |
| 2 | 1            | F(1) + F(0) = 1 + 0 |
| 3 | 2            | F(2) + F(1) = 1 + 1 |
| 4 | 3            | F(3) + F(2) = 2 + 1 |
| 5 | 5            | F(4) + F(3) = 3 + 2 |
| 6 | 8            | F(5) + F(4) = 5 + 3 |
