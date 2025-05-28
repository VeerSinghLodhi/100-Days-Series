**Even and Odd Numbers Sum Calculator**

This program calculates the sum of even and odd numbers from a given list of integers. It includes separate methods to compute the sum of even and odd numbers.

---

### ✨ How It Works:
1. **User Input:**
   - The user specifies the number of integers.
   - The user enters the integers, which are stored in an array.
2. **Sum Calculation:**
   - The program uses two methods:
     - **`getSumOfEvenNumber`**: Calculates the sum of even numbers.
     - **`getSumOfOddNumber`**: Calculates the sum of odd numbers.
   - Each method iterates through the array, checks the parity of each number, and accumulates the respective sum.
3. **Display Result:**
   - The program displays the sum of even and odd numbers separately.

---

### 📌 Key Features:
- Modular design with dedicated methods for even and odd sum calculations.
- Accepts dynamic input from the user.
- Provides clear and formatted output.

---

### ✅ Example:
#### Input:
```
Enter the number of integers: 5
Enter 1 integer: 2
Enter 2 integer: 3
Enter 3 integer: 4
Enter 4 integer: 5
Enter 5 integer: 6
```
#### Output:
```
The Sum of Even integers is: 12
The Sum of Odd integers is: 8
```

---

### 🛠️ Logic Explanation:
1. **Accept Input:**
   - The user enters the number of integers and the integers themselves.
   - These integers are stored in an array.
2. **Even Sum Calculation:**
   - Iterate through the array.
   - Check if each number is divisible by 2 (i.e., `number % 2 == 0`).
   - Add the number to the `evenSum` variable if true.
3. **Odd Sum Calculation:**
   - Iterate through the array.
   - Check if each number is not divisible by 2 (i.e., `number % 2 != 0`).
   - Add the number to the `oddSum` variable if true.
4. **Display Results:**
   - Print the values of `evenSum` and `oddSum`.

---

### 🚀 How to Run the Program:
1. Save the code to a file in your desired programming language.
2. Compile and execute the program.
3. Enter the required inputs when prompted, and view the results.

---

### 📚 Learnings:
- Iterating through arrays.
- Using conditional statements to filter data.
- Writing modular code with methods for specific tasks.

---

### 🙌 Want to Try More?
Modify the program to:
1. Calculate the sum for a specific range of numbers.
2. Find and display the count of even and odd numbers along with their sums.
3. Handle floating-point numbers instead of integers.

Enjoy coding! 🎉
