
// Arrow Function for Decimal to Bianry Conversion
const getDecimalToBinary=(decimal)=>{
    let binary=0;
    let place=1;
    while(decimal!=0){
        remainder=decimal%2;  //Get the last binary digit
        binary+=remainder*place;  //Add it to the binary result
        place*=10;      //Move to the next place value
        decimal/=2;     //Divide the number by 2
        decimal=Math.floor(decimal); // Floor division. remove decimal part
    }
    return binary;
};

// Let's Start here
let decimal = 10 ; // Binary :- 1010
binary=getDecimalToBinary(decimal);
console.log("Binary Equivalent is "+binary);