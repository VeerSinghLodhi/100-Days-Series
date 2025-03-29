
// Recursive method to calculate Fibonacci numbers
const getFibonacci=(num)=>{
    if(num<=1)
        return num;// Base cases: Fibonacci(0) = 0, Fibonacci(1) = 1
    else
        return getFibonacci(num-1)+getFibonacci(num-2); // Recursive call
}
// Let's Start here
let num=10;// Number of terms in the Fibonacci series
console.log("Fibonacci series up to " + num + " terms:");
for(let i=0;i<num;i++){
    console.log(" "+getFibonacci(i));
}