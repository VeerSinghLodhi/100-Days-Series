
---

## 🔁 Reverse a String

This project demonstrates different ways to reverse a string using basic and advanced programming techniques. Reversing a string is a foundational exercise to strengthen your understanding of string manipulation and logic-building.

---

### 🧠 What is String Reversal?

Reversing a string means rearranging its characters so the last character becomes the first, the second-last becomes second, and so on.
**Example:**
Input: `"hello"` → Output: `"olleh"`

---

### ✅ Common Approaches

#### 1. **Using a Loop (Manual Reversal)**

* Start from the end of the string.
* Append each character to a new string or print it in reverse.
* **Pros**: Easy to understand.
* **Cons**: Can be less efficient due to string immutability in some languages.

#### 2. **Using Built-in Functions**

* Many languages have built-in methods like `.reverse()` or slicing (`[::-1]` in Python).
* **Example (Python)**:
  `reversed_string = original[::-1]`
* **Pros**: Quick and concise.
* **Cons**: Doesn't reinforce logic-building skills.

#### 3. **Using Recursion**

* Define a function that calls itself with the substring excluding the first character, and adds the first character at the end.
* **Pros**: Good for understanding recursion.
* **Cons**: Less efficient for long strings (stack overflow risk).

#### 4. **Using Stack (Data Structure)**

* Push all characters onto a stack, then pop them one by one to build the reversed string.
* **Pros**: Demonstrates practical use of stack (LIFO).
* **Cons**: Slightly more complex.

#### 5. **Using Two-Pointer Technique (In-Place)**

* Convert the string to a character array.
* Swap characters from both ends, moving toward the center.
* **Pros**: Efficient, used in technical interviews.
* **Cons**: Works when strings are mutable (like arrays in C/C++/Java).

---

### 📚 Key Concepts Covered

* Loops and iteration
* Recursion
* String indexing and slicing
* Stack data structure
* Memory optimization (in-place reversal)

---

