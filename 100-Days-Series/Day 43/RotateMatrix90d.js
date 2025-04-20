
// Arrow Function to rotate a matrix by 90 degrees clockwise
const getRotate=(matrix)=>{
    let n=matrix.length;
    for(let i=0;i<n;i++){
        for(let j=i+1;j<n;j++){
            temp=matrix[i][j];
            matrix[i][j]=matrix[j][i];
            matrix[j][i]=temp;
        }
    }
    for(let i=0;i<n;i++){
        let left=0;
        let right=n-1;
        while(left<right){
            temp=matrix[i][left];
            matrix[i][left]=matrix[i][right];
            matrix[i][right]=temp;
            left++;
            right--;
        }
    }
}
// Function to print matrix
const getPrintMatrix=(matrix)=>{
    for(let i=0;i<matrix.length;i++){
        for(let j=0;j<matrix.length;j++){
            console.log("Matrix["+i+"]["+j+"] = "+matrix[i][j]);
        }
    }
}
// Let's Start here
matrix=[
    [1,2,3],
    [4,5,6],
    [7,8,9]
];
console.log("Original Matrix :");
getPrintMatrix(matrix);
console.log("Rotated Matrix : ");
getRotate(matrix);
getPrintMatrix(matrix)