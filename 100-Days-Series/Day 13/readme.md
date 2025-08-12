
# 📄 Pyramid Pattern Logic

**Purpose:**  
To print a **pyramid shape** using stars (`*`) or numbers.

---

## 🔹 Logic:
- Use **two nested loops**:
  - Outer loop → For each row.
  - Inner loops → 
    - First for **spaces** (to align the pyramid).
    - Second for **stars** (or numbers).

- In each row:
  - Print **(total rows - current row)** spaces.
  - Then print **(2 × current row - 1)** stars.

---

## 🔹 Example (for 5 rows):

```
    *
   ***
  *****
 *******
*********
```

