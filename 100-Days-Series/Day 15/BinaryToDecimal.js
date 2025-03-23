
// Arrow Function for Binary to Decimal number
const getBinaryToDecimal=(binary)=>{
    let decimal=0;
    let base=1;
    while(binary!=0){
        let remainder=binary%10; // Extract the last digit
        decimal+=remainder*base; // Multiply with the current base
        base*=2;                // Update the base (2^i)
        binary/=10;             
        binary=Math.floor(binary); // Floor division for remove the last digit
    }
    return decimal;
};

// Let's Start here
let binary=1020340; // Answer Will be 116;
decimal=getBinaryToDecimal(binary)
console.log("The Decimal Equivalent is "+decimal);