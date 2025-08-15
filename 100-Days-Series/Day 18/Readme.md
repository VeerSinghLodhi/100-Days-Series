
---

## 🔤 Count Vowels and Consonants in a String

This project explores how to count both vowels and consonants in a given string. It's a fundamental exercise for understanding string traversal, character classification, and condition-based logic.

---

### 🧠 Definitions

* **Vowels**: `a, e, i, o, u` (case-insensitive)
* **Consonants**: All **alphabetic characters** that are **not vowels**, such as `b, c, d, f, g, ...`.

> Note: Only **alphabetic letters** are counted as vowels or consonants. Digits, spaces, and punctuation are ignored.

---

### 🎯 Objective

Given a string, determine:

* The **number of vowels**
* The **number of consonants**

**Example:**
Input: `"Hello, World!"`

* Vowels: `3` (`e, o, o`)
* Consonants: `7` (`h, l, l, w, r, l, d`)

---

### ✅ Common Approaches

#### 1. **Using a Loop**

* Traverse each character in the string.
* Use `isLetter()` or character checks to ignore non-alphabetic characters.
* If the character is in the vowel list → count as vowel.
* Else if it's a letter → count as consonant.
* **Pros**: Beginner-friendly and clear.

#### 2. **Using Sets**

* Store vowels in a set for fast lookup.
* For each character:

  * Check if it’s a letter.
  * If in vowel set → vowel count.
  * Else → consonant count.
* **Pros**: Efficient for large inputs.

#### 3. **Using Regular Expressions (Regex)**

* Use regex to match all vowels and consonants.
* **Pros**: Concise and powerful in supported languages.
* **Cons**: Requires understanding of regex syntax.

#### 4. **Using Recursion (For Practice)**

* Process one character per recursive call.
* Base case: empty string.
* Recursive case: check first character, then call on rest.
* **Pros**: Useful for learning recursion.
* **Cons**: Not optimal for large strings.

---

### 📚 Concepts Reinforced

* String traversal
* Character classification
* Use of sets and conditionals
* Optional: Regular expressions and recursion

---
