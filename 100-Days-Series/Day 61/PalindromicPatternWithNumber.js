
// Arrow Functiont to print Palindromic Pattern with number;
function getPrintPalindromic(rows){
    for(let i=1;i<=rows;i++){
        line="";
        // Collect Spaces
        for(let j=1;j<=rows-i;j++){
            line+="  ";
        }
        // Collect Increasing numbers
        for(let j=1;j<=i;j++){
            line+=j+" ";
        }
        // Collect Decreasing numebrs
        for(let j=i-1;j>=1;j--){
            line+=j+" ";
        }
        console.log(line);
    }
}
//Let's Start here
let rows=5;
getPrintPalindromic(rows);