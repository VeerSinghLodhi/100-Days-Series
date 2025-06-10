
// Function to replace negative numbers with zero.
const getReplaceNegativeNumberWithZero=(arr)=>{
    for(let i=0;i<arr.length;i++){
        if(arr[i]<0){
            arr[i]=0;
        }
    }
}
// Let's Start Here
const arr=[-1, 2, -3, 4, -5];
console.log("Original Array");
console.log(arr);
getReplaceNegativeNumberWithZero(arr);
console.log("Updated Array");
console.log(arr);