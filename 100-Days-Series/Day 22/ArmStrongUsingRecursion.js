
// Recursion(Arrow) Method to calculate power of a number
const getPower=(base,exp)=>{
    if(exp==0)
        return 1;// Base case : anything to the power of 0 is 1.
    return base*getPower(base,exp-1); // Recursive step.
}
// Recursion(Arrow) method to calculate the sum of digits raised to the power
const getArmStrong=(num,power)=>{
    if(num==0)
        return 0;
    let digit=num%10;// Get the last digit.
    return getPower(digit,power)+getArmStrong(Math.floor(num/10),power);// Recursive step
}
// Recursice(Arrow) method to check if number is an ArmStrong number.
const getIsArmStrong=(num)=>{
    let temp=num;
    let countDigits=0;
    while(temp!=0){// Calculate the number digits
        countDigits++;
        temp/=10;
        temp=Math.floor(temp);// Floor Division
    }
    let sum=getArmStrong(num,countDigits);//Calculate sum of digits raised to the power
    return sum==num; //Check if it matches the original number
}

// Let's Start here
let num=153;// Constant number
// Check and display result
result=getIsArmStrong(num);
if(result)
    console.log(num+" is an ArmStrong number!");
else 
    console.log(num+" is not an ArmStrong number!");