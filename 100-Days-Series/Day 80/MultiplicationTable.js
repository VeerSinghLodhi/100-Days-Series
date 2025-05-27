
// Arrow Function to print the multiplication table for a given number.
const getPrintTable=(number)=>{
    console.log("Multiplication table for "+number+" :");
    for(let i=1;i<=10;i++){
        //Correcting the multiplication logic in the loop
        console.log(number+" x "+i+" = "+(number*i));
    }
}

// Let's Start Here
let number=10;
// Call the function to print its multiplication table
getPrintTable(number);