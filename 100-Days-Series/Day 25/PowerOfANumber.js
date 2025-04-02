
// Arrow Function to calculate power of a number.
const getPowerOfANumber=(base,exp)=>{
    if(exp==0)
        return 1;
    let res=1;
    while(exp!=0){
        res*=base;
        exp--;
    }
    return res;
}
// Recursion function to calculate power of a number.
const getPower=(base,exp)=>{
    if(exp==0)
        return 1;
    return base*getPower(base,--exp); // Recursive step
}
// Let's Start here
num=5;
power=3;
let res1=getPowerOfANumber(num,power); // Normal (Arrow function)
let res2=getPower(num,power);           // Recursion function.
console.log("Arrow function result is "+res1);
console.log("Recursion function result is "+res2);