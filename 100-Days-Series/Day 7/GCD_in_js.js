//  Greatest Common Divisor (GCD)
//  Arrow Function to calculate GCD using the Euclidean algorithm(GCD)
const getGCD=(num1,num2)=>{
    while(num2!=0){
        let remeinder=num1%num2;
        num1=num2;
        num2=remeinder;
    }
    return num1;
}
//let's Start here
let num1=98;
let num2=56;
//Ensure the numbers are positive 
if(num1<0)
    num1=-num1;
if(num2<0)
    num2=-num2;
//Calculate GCd
gcd=getGCD(num1,num2);
console.log("GCD of "+num1+" and "+num2+" is : "+gcd);