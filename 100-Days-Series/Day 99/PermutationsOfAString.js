// Function to swap characters in a string
function swap(str, i, j) {
    const charArray = str.split(''); // Convert string to array
    const temp = charArray[i];
    charArray[i] = charArray[j];
    charArray[j] = temp;
    return charArray.join(''); // Convert array back to string
}
// Recursive function to generate permutations
function permute(str, l, r) {
    if (l === r) {
        console.log(str); // Print the permutation
    } else {
        for (let i = l; i <= r; i++) {
            str = swap(str, l, i); // Swap current character with the leftmost character
            permute(str, l + 1, r); // Recur for the rest of the string
            str = swap(str, l, i); // Backtrack to the original configuration
        }
    }
}
// Let's Start Here
const str = "ABC";
console.log(`All permutations of the string "${str}" are:`);
permute(str, 0, str.length - 1);
