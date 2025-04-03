
// Recursion(Arrow) method to find sum of first n natural numbers.
const getsum=(num)=>{
    if(num==1)
        return 1;// Base Case
    return num+getsum(num-1);
}
// Let's Start here
let num=100;
// Call the arrow function and display result
console.log("Sum of first "+num+" natural number : "+getsum(num));
