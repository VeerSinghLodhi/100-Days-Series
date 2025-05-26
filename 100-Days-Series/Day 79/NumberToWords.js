
// Array to map digits to their English words
const words=[
    "zero","one","two","three","four","five","six","seven","eight","nine"
];
// Recusice function to convert number to words 
const getConvertNumberToWords=(number)=>{
    // Base Case : if the number is 0, stop recursion 
    if(number==0){
        return "";
    }
    // Recursive call
    let result=getConvertNumberToWords(Math.floor(number/10));
    result+=words[number%10]+" ";
    return result;
}
// Let's Start here
let number=2005;
if(number==0){
    console.log("Zero");
}else{
    let result=getConvertNumberToWords(number).trim();
    console.log(result);
}