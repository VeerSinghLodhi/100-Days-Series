
---

# 📘 Pangram Checker – Theory and Logic

## 🔍 What is a Pangram?

A **pangram** is a sentence that includes **every letter** of the **English alphabet (a–z)** **at least once**.

> ✅ Example of a pangram:
> “The quick brown fox jumps over the lazy dog”

This sentence contains all 26 letters, making it a perfect example of a pangram.

---

## 🧠 Why Check for Pangrams?

* **Typing practice:** Pangrams are used to test typewriters, keyboards, or fonts.
* **Language tools:** Useful in puzzles, games, or language learning apps.
* **Programming exercises:** Great for testing knowledge of strings, sets, and conditions.

---

## 🧮 Logic to Check for a Pangram

### 1. **Normalize the Sentence**

Convert all letters to the **same case** (usually lowercase) to treat `A` and `a` as the same letter.

### 2. **Ignore Non-Alphabet Characters**

Only consider letters `a` to `z`. Numbers, spaces, and punctuation marks are **not required** for a pangram.

### 3. **Track Unique Letters**

Keep a record of each **unique letter** that appears in the sentence.

### 4. **Final Check**

If the total number of unique letters is **26**, the sentence is a **pangram**.

---

## ✅ Key Points

* The order of letters doesn’t matter.
* Each letter must appear **at least once**, not necessarily more.
* Extra characters or repetition do **not** affect the result.
* Useful data structures for implementation: **Set**, **Boolean array**, or **frequency map**.

---

## 🔎 Example Walkthrough

**Sentence:** `"Pack my box with five dozen liquor jugs"`

* Convert to lowercase.
* Filter and track all alphabet letters.
* 26 unique letters are found → ✅ **It's a pangram**

---

## ⚙️ Real-Life Uses

* Font rendering checks
* UI design for keyboards
* Educational tools
* Algorithm testing

---
 