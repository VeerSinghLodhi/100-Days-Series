
// Function to find the sum of positive numbers in the array.
const getSumOfPositiveNumbers=(arr)=>{
    let sum=0;
    for(let i=0;i<arr.length;i++){
        if(arr[i]>0){
            sum+=arr[i];
        }
    }
    return sum;
}
// Let's Start Here
const arr=[-2, 3, 4, -1, 5];
let result=getSumOfPositiveNumbers(arr);
console.log("Sum of Positive Numbers : "+result);