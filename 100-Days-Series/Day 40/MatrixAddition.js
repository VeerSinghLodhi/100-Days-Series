// Function for matrix addition
const getAdd=(arr1,arr2)=>{
    if(arr1.length!=arr2.length && arr1[0].length!=arr2[0].length){
        console.log("Matrices must have the same dimensions for addition.");
        return;
    }
    const rows=arr1.length;
    const cols=arr1[0].length;
    const result=[];
    for(let i=0;i<rows;i++){
        const row=[];
        for(let j=0;j<cols;j++){
            row.push(arr1[i][j]+arr2[i][j]);
        }
        result.push(row);
    }
    return result;
}
// Let's Start here
arr1=[
    [1,2,3],
    [4,5,6],
    [7,8,9]
];
arr2=[
    [10,20,30],
    [40,50,60],
    [70,80,90]
];
const result=getAdd(arr1,arr2);
console.log(result);
