
// Arrow function for check if number is perfect number or not.
const getIsPerfectNumber=(num)=>{
    if(num<=1)
        return false;
    let sum=0;
    for(let i=1;i<=num/2;i++){
        if(num%i==0)
            sum+=i;
    }
    return sum==num;
}
// Let's Start here
let num=28;
// Call the function and display result.
if(getIsPerfectNumber(num))
    console.log(num+" is a perfect number!");
else
    console.log(num+" is not a perfect number!");