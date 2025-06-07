
// Function to calculate factorial
const getFactorial=(n)=>{
    if (n==0 || n==1)
        return 1;
    return n*getFactorial(n-1);
}
// Function to calculate the nth Catalan number
const getCatalan=(n)=>{
    return getFactorial(2*n)/(getFactorial(n+1)*getFactorial(n));
}
// Let's Start Here
let n=5;
console.log("Catalan number up to "+n+" terms : ");
for(let i=0;i<n;i++){
    console.log(getCatalan(i));
}