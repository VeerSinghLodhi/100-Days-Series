# Sum of Natural Numbers

This project calculates the **sum of the first N natural numbers** using a recursive function in JavaScript.

## 📌 Description

The sum of the first `n` natural numbers is calculated using the recursive approach:

> Sum(n) = n + Sum(n - 1)

The base case is:
> Sum(0) = 0

## 📂 Files

- `sum.js` – Contains the function to compute the sum.
- `README.md` – Project documentation.

## 💻 Code Example

```javascript
function getSum(n) {
    if (n === 0) {
        return 0;
    }
    return n + getSum(n - 1);
}

console.log(getSum(5)); // Output: 15
