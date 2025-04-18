
// Arrow Function for matrix multiplication
const getMatrixMultiplication=(a,b)=>{
    const result=[];
    // Performing Matrix Multiplication
    for(let i=0;i<a.length;i++){
        for(let j=0;j<b[0].length;j++){
            const row=[];
            for(let k=0;k<a[0].length;k++){
                row.push(a[i][k]*b[k][j]);
            }
            result.push(row);
        }
    }
    return result;
}

// Let's Start here
a=[
    [3,3],
    [3,3]
];
b=[
    [3,3],
    [3,3]
];
const result=getMatrixMultiplication(a,b);
console.log(result);