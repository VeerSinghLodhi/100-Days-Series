 
---

# ⭐ Diamond Pattern – Theory Only

## 📌 What is a Diamond Pattern?

The **Diamond Pattern** is a classic star pattern in programming where stars (`*`) are arranged to form the shape of a **diamond**. This pattern has a **symmetrical shape**, consisting of an upper triangle and a lower inverted triangle. It's widely used to practice nested loops, logic building, and understanding spacing in 2D console patterns.

---

## 🧠 Concept Behind Diamond Pattern

To build a diamond pattern, we split the shape into **two parts**:

1. **Upper Half (including the middle row)**
   This is essentially a **pyramid** where:

   * The number of stars increases with each row.
   * The number of spaces before stars decreases with each row.

2. **Lower Half**
   This is an **inverted pyramid** where:

   * The number of stars decreases with each row.
   * The number of spaces before stars increases with each row.

Each row of stars is **center-aligned** using spaces.

---

## ✅ Key Components

* **Outer Loop**: Runs from 1 to `n` for the upper half and from `n-1` to 1 for the lower half.
* **First Inner Loop**: Prints spaces to align stars in the center.
* **Second Inner Loop**: Prints stars in increasing or decreasing order.

---

## 🧩 Pattern Example (n = 5)

```
    *    
   ***   
  *****  
 ******* 
*********
 ******* 
  *****  
   ***   
    *    
```

---

## 💡 Why Learn This?

* Improves **loop logic** and nested structure understanding.
* Helps grasp how to control **spacing** and **symmetry** in output.
* Useful in interview patterns and coding warmups.

---
 