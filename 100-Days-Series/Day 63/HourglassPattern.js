// Arrow Function to print Hourglass Pattern
const getPrintHourglass=(n)=>{
    // Upper part
    
    for (let i = n; i >= 1; i--) {
        line="";
        for (let space = 1; space <= n - i; space++) {
            line+=" ";
        }
        for (let j = 1; j <= (2 * i - 1); j++) {
            line+="*";
        }
        console.log(line);
    }
    
    // Lower part
    for (let i = 2; i <= n; i++) {
        line="";
        for (let space = 1; space <= n - i; space++) {
            line+=" ";
        }
        for (let j = 1; j <= (2 * i - 1); j++) {
            line+="*";
        }
        console.log(line);
    }
    
}
// Let's Start Here
let rows=6;
getPrintHourglass(rows);