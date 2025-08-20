<!-- Hollow Rectangle. -->


 
---

### 📚 **Theory: Hollow Rectangle Star Pattern**

---

#### 🔹 **Definition:**

A **Hollow Rectangle Star Pattern** is a rectangular shape made using the `*` (star) character where:

* The **boundary** (first row, last row, first column, and last column) is filled with stars.
* The **inner area** is empty (filled with spaces), giving it a **hollow** appearance.

---

#### 🔹 **Pattern Example:**

For `rows = 4` and `columns = 6`:

```
******
*    *
*    *
******
```

---

#### 🔹 **Logic & Construction:**

To construct this pattern:

1. Loop through each row from `1` to `rows`.
2. For each row, loop through each column from `1` to `columns`.
3. Print `*` when:

   * The current row is the **first or last** (`i == 1` or `i == rows`), or
   * The current column is the **first or last** (`j == 1` or `j == columns`).
4. Otherwise, print a **space** to create the hollow effect.

---

#### 🔹 **Algorithm Steps:**

1. Input number of rows and columns.
2. Use two nested loops:

   * Outer loop for rows (`i` from 1 to `rows`)
   * Inner loop for columns (`j` from 1 to `columns`)
3. Inside inner loop:

   * If `i == 1` or `i == rows` or `j == 1` or `j == columns`: print `*`
   * Else: print space `' '`

---

#### 🔹 **Use Cases:**

* Practicing **nested loops**
* Understanding **conditional logic** in pattern problems
* Common in **interview warm-ups**, **school assignments**, and **loop practice exercises**

---
 