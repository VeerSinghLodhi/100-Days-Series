
// Arrow Function to print a matrix in spiral order.
const getSpiralMatrix=(matrix)=>{
    top=0,bottom=matrix.length-1;
    left=0,right=matrix[0].length-1;
    while(top<=bottom && left<=right){
        // traverse from left to right
        for(let col=left;col<=right;col++){
            console.log(matrix[top][col]);
        }
        top++;
        // traverse from top to bottom
        for(let row=top;row<=bottom;row++){
            console.log(matrix[row][right]);
        }
        right--;
        if(top<=bottom){
            // traverse from right to left
            for(let col=right;col>=left;col--){
                console.log(matrix[bottom][col]);
            }
            bottom--;
        }
        if(left<=right){
            // traverse from bottom to top
            for(let row=bottom;row>=top;row--){
                console.log(matrix[row][left]);
            }
            left++;
        }

    }
};

// Let's Start here
matrix=[
    [1,2,3],
    [4,5,6],
    [7,8,9]
];
getSpiralMatrix(matrix);