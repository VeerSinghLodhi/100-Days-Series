
// Arrow Function for Matrix Transpose
const getTransposeMatrix = (matrix) => {
    const transpose = [];
    for (let i = 0; i < matrix[0].length; i++) { 
        const row = [];
        for (let j = 0; j < matrix.length; j++) { 
            row.push(matrix[j][i]); 
        }
        transpose.push(row);
    }
    return transpose;
};

// Let's Start here
const matrix = [
    [1, 2, 3],
    [4, 5, 6]
];
console.log("Original Matrix:");
console.log(matrix);

console.log("Transpose Matrix:");
console.log(getTransposeMatrix(matrix));
