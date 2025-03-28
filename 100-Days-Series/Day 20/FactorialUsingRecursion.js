
 // Arrow function to calculate factorial using recursion
const factorial=(num)=>{
    if(num==0 || num==1)
        return 1; // Base case: factorial of 0 or 1 is 1
    return num*factorial(num-1);
}
// Let's Start here
let num=5;// Constant number.
fact=factorial(num);
console.log("Factorial of "+num+" is : "+fact);
