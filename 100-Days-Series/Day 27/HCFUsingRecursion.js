
// Recursion function to find HCF.
const getHCF=(num1,num2)=>{
    if(num2==0)
        return num1;
    return getHCF(num2,num1%num2);  // Recursion step.
}

// Let's Start here
let num1=48;
let num2=18;
let hcf=getHCF(num1,num2);
console.log("HCF of "+num1+" and "+num2+" is : "+hcf);