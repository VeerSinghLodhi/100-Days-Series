 
---

# 🧾 Palindromic Number Pattern in Java

## 📌 Pattern Description

The **Palindromic Number Pattern** is a pyramid-shaped number pattern that forms a mirror-like structure in each row. Each line:

* Starts with spaces for alignment,
* Then prints increasing numbers from `1` up to the current row number,
* Followed by decreasing numbers from that row number back to `1`.

This results in a symmetrical or **palindromic effect** for each row.

---

## 🔍 Output Example (for `rows = 5`)

```
        1
      1 2 1
    1 2 3 2 1
  1 2 3 4 3 2 1
1 2 3 4 5 4 3 2 1
```

---

## 🛠️ Logic Breakdown

1. **Outer loop** runs from `1` to `rows` — controls the number of lines.
2. **First inner loop** prints spaces:

   * Number of spaces = `rows - i`
   * Two spaces per gap (`"  "`) for proper pyramid alignment.
3. **Second inner loop** prints numbers increasing from `1` to `i`.
4. **Third inner loop** prints numbers decreasing from `i-1` back to `1`.

---

## 📘 Use Cases

* Practicing nested loop patterns in Java.
* Helps understand loop control, number logic, and formatting.
* Often asked in beginner-level coding interviews and school assignments.

---
 