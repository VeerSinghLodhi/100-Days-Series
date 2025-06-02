
// Arrow Function to print Even Indices 
const getPrintEvenIndices=(arr)=>{
    for(let i=0;i<arr.length;i++){
        if(i%2==0){
            console.log(arr[i]);
        }
    }
}
// Arrow Function to print Odd Indices 
const getPrintOddIndices=(arr)=>{
    for(let i=0;i<arr.length;i++){
        if(i%2!=0){
            console.log(arr[i]);
        }
    }
}
// Let's Start Here
const arr=[1,2,3,4,5,6,7,8,9,10];
console.log("Even Indices Printing..");
getPrintEvenIndices(arr);
console.log("Odd Indices Printing..");
getPrintOddIndices(arr);