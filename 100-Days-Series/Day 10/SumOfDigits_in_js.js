
// Arrow Function for calculate the sum of digits
const getSumOfDigits=(num)=>{
    let sum=0;
    while(num!=0){
        sum+=num%10;
        num/=10;
        num=Math.floor(num);
    }
    return sum;
}
// Let's Start here
let num=12345; // 1+2+3+4+5=15(Answer)
// Call the function and display the result
let totalSum=getSumOfDigits(num);
console.log("Sum of Digits is : "+totalSum);
