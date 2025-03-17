// Count Digits in a Number
// Arrow Function for count digits
const getCountDigits=(num)=>{
    let count=0;
    // Handle negative numbers
    if(num<0)
        num=-num;
    // Count Digits
    while(num!=0){
        count++;
        num/=10;
        num=Math.floor(num);
    }
    return count;
}
// Let's Start here
let num=12345;
// Constant number 12345
// Call the Arrow function and display the result
digits=getCountDigits(num);
console.log("The number of digits in "+num+" is : "+digits);
