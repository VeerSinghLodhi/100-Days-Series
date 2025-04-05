
// Arrow Recursion method to find GCD
const getGCD=(num1,num2)=>{
    if(num2==0){
        return num1;
    }
    return getGCD(num2,num1%num2);// Recursion step
}
// method to find LCM using recursion GCD
const getLCM=(num1,num2)=>{
    return (num1*num2)/getGCD(num1,num2);
}
// Let's Start here
let num1=12;
let num2=18;
let lcm=getLCM(num1,num2);
console.log("LCM of "+num1+" and "+num2+" is : "+lcm);