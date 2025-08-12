
# 📄 Swapping Two Numbers Without Temporary Variable

**Purpose:**  
To swap the values of two variables without using a third (temporary) variable.

---

## 🔹 Logic:
- Add both numbers and store the result in the first variable.
- Subtract the second variable from the first to get the original value of the first.
- Subtract the updated second variable from the first to get the original value of the second.

---

## 🔹 Example:
If `a = 5` and `b = 7`:
```
a = a + b → a = 5 + 7 = 12
b = a - b → b = 12 - 7 = 5
a = a - b → a = 12 - 5 = 7
```
Result:  
- `a = 7`
- `b = 5`

---

## 🔹 Code Snippet (JavaScript):
```javascript
let a = 5, b = 7;
a = a + b;
b = a - b;
a = a - b;

console.log("After Swapping: a =", a, ", b =", b);
```
