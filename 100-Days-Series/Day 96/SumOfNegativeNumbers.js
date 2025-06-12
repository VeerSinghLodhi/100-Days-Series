
// Function to find the sum of negative numbers in the array
const getSumOfNeagtiveNumber=(arr)=>{
    let sum=0;
    for(let i=0;i<arr.length;i++){
        if(arr[i]<0){
            sum+=arr[i];
        }
    }
    return sum;
}
// Let's Start Here
const arr=[5,-4,3,-2,1,-6];
let result=getSumOfNeagtiveNumber(arr);
console.log('Sum of Negative Numbers : '+result);