
const nums = [
    [1, 4, 9],
    [11, 4, 3],
    [2, 2, 3]
];

const targetRow = 1; // Index of the row to sum (second row)
let sum = 0;

// Loop through the elements of the target row
for (const num of nums[targetRow]) {
    sum += num;
}

// Print the result
console.log("The sum of the numbers in row " + (targetRow + 1) + " is: " + sum);
