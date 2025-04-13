// Let's Start here
// Initialize the array with elements
const arr = [5, 4, 6, 3, 6, 1, 8, 9, 10];

// Initialize variables to track the largest and smallest values
// Both are initially set to the first element of the array
let largest = arr[0];
let smallest = arr[0];

// Loop through each element in the array
for (let i = 0; i < arr.length; i++) {
    // Update largest if the current element is greater
    if (largest < arr[i]) 
        largest = arr[i];

    // Update smallest if the current element is smaller
    if (smallest > arr[i]) 
        smallest = arr[i];
}

// Print the largest and smallest values
console.log("Largest " + largest + ", Smallest " + smallest);
