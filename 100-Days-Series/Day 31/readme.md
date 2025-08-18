
---

# 🔄 Toggle Case – Theory and Logic

## 📘 What is Toggle Case?

**Toggle Case** refers to changing each character of a string to its **opposite case**:

* Convert **uppercase** letters to **lowercase**
* Convert **lowercase** letters to **uppercase**

> 📝 Example:
> `"HeLLo WoRLd"` → `"hEllO wOrlD"`

---

## 🎯 Use Cases

* Text editors and word processors
* Fun formatting for usernames, titles, or UI elements
* CAPTCHA variations
* Practice for string manipulation and character handling

---

## 🧠 Theory

### 1. **Character Identification**

Each character needs to be identified as:

* Uppercase (e.g., 'A' to 'Z')
* Lowercase (e.g., 'a' to 'z')
* Other (spaces, digits, punctuation) — remain **unchanged**

### 2. **Case Conversion**

* If a character is lowercase: convert it to uppercase
* If a character is uppercase: convert it to lowercase
* Other characters are left as-is

### 3. **Character Encoding (Optional Knowledge)**

* In ASCII, the difference between uppercase and lowercase letters is **32**
  (e.g., `'a' = 97`, `'A' = 65` ⇒ `'a' - 'A' = 32`)

---

## 🔁 Logic Flow (Step-by-Step)

1. Read the input string.
2. Initialize an empty result string or builder.
3. Loop through each character:

   * If it's an uppercase letter → convert to lowercase
   * If it's a lowercase letter → convert to uppercase
   * If it's anything else → keep it unchanged
4. Append the modified character to the result.
5. Output the final toggled string.

---

## ⚙️ Things to Handle

* Preserve spaces, punctuation, and numbers.
* Efficient handling for long strings (use `StringBuilder` in Java).
* Avoid built-in toggling functions if practicing basic logic building.

---

## ✅ Example

**Input:** `"Java IS FuN!"`
**Output:** `"jAVA is fUn!"`

---
