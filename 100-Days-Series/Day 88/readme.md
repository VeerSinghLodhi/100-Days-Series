
---

# 📦 Perfect Cube Number Finder (Java)

## 📌 Description

This Java program finds and displays all **perfect cube numbers** between **1** and a user-provided number **N**.

A **perfect cube** is a number that can be expressed as the cube of an integer.
For example:

* $1^3 = 1$
* $2^3 = 8$
* $3^3 = 27$
* $4^3 = 64$

These numbers are known as **perfect cubes**.

---

## 🧠 Logic / Theory

The core logic is:

1. Loop from `i = 1` up to `i^3 <= N`.
2. For each `i`, compute `i * i * i` (i.e., $i^3$).
3. If the result is less than or equal to `N`, it is a valid perfect cube and is printed.
4. The loop breaks when $i^3 > N$.

---

## 💡 Example

**Input:**

```
Enter the value of N: 100
```

**Output:**

```
Perfect Cube Number between 1 to N : 
1 8 27 64
```

---

## 🧾 How It Works

* User inputs a number `N`.
* The program calculates and prints all perfect cube numbers $\leq N$.

---

## 🛠 Code Structure

### 1. `getFindPerfectCubeNumber(int n)`

> Finds and prints all perfect cubes up to `n`.

### 2. `main` method

> Takes user input and calls the function to compute cubes.

---

## ✅ Requirements

* Java installed
* Any Java IDE or terminal for running the program

---

## 🚀 Run the Program

Compile and run in terminal or IDE:

```bash
javac PerfectCubeNumber.java
java PerfectCubeNumber
```

---
 