
// Arrow Function to print perfect number Square between 1 to N
const getPrintPerfectSquareNumber=(n)=>{
    for(let i=1;i*i<=n;i++){
        console.log((i*i));
    }
}
// Let's Start Here
let n=20;
console.log("Perfect Square Number between 1 and N :");
getPrintPerfectSquareNumber(n);