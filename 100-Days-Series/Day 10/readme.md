

# 📄 Sum of Digits Logic

**Purpose:**  
To calculate the sum of all digits of a given number.

**Logic:**  
- Initialize `sum = 0`.
- Extract the **last digit** using `number % 10` (modulus).
- Add this digit to `sum`.
- Remove the last digit by doing `number = number / 10`.
- Repeat the steps until the number becomes `0`.
- The final value of `sum` is the result.

**Example:**  
For number `584`:
```
584 % 10 → 4 → sum = 4
58 % 10 → 8 → sum = 4 + 8 = 12
5 % 10 → 5 → sum = 12 + 5 = 17
```
Result: **Sum = 17**

**Code Snippet (Java):**
```java
public static int sumOfDigit(int n) {
    int sum = 0;
    while (n > 0) {
        sum += n % 10;  // add last digit
        n = n / 10;     // remove last digit
    }
    return sum;
}
```

