// Least Comman Multiple(LCM)
// Arrow Function to calculate GCD using the Euclidean algorithm
const getGCD=(num1,num2)=>{
    while(num2!=0){
        let remainder=num1%num2;
        num1=num2;
        num2=remainder;
    }
    return num1;
}
// Expression Function
const getLCM=function(num1,num2){
    let gcd=getGCD(num1,num2);
    return num1*num2/gcd;
}
// Let's Start here
let num1=6;
let num2=8;
// Ensure the numbers are positive
if(num1<0)
    num1=-num1;
if(num2<0)
    num2=-num2;
// Calculate LCM
lcm=getLCM(num1,num2);
console.log("LCM of "+num1+" and "+num2+" is :"+lcm);
