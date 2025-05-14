
// Arrow Functiont to print Palindromic Pattern with Alphabet
function getPrintPalindromic(rows){
    for(let i=1;i<=rows;i++){
        line="";
        ch=65;
        // Collect Spaces
        for(let j=1;j<=rows-i;j++){
            line+="  ";
        }
        // Collect Increasing Alphabet
        for(let j=1;j<=i;j++){
            line+=String.fromCharCode(ch++) + " ";
        }
        for(let j=i-1;j>=1;j--){
            line+=String.fromCharCode(ch++) + " ";
        }
        console.log(line);
    }
}
//Let's Start here
let rows=5;
getPrintPalindromic(rows);