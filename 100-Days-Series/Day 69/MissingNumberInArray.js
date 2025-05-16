// Function to find the missing number in an array
function getMissingNumber(arr, size) {
    const n = size + 1; // Actual range (1 to n)
    const totalSum = (n * (n + 1)) / 2; // Sum of 1 to n
    
    // Calculate sum of array elements using a for loop
    let arraySum = 0;
    for (let i = 0; i < size; i++) {
        arraySum += arr[i];
    }

    return totalSum - arraySum;
}
// Let's Start Here
const arr = [1, 2, 4, 5, 6]; // Example
const size = arr.length; // Number of elements in the array
const missingNumber = getMissingNumber(arr, size);
console.log("Missing number is:", missingNumber);
