// Function to print Diamond Pattern
function getPrintDiamond(n){
    // Print the upper half of the diamond
    for (let i = 1; i <= n; i++) {
        line="";
        // Print spaces
        for (let space = 1; space <= n - i; space++) {
            line+=" ";
        }
        // Print stars
        for (let j = 1; j <= (2 * i - 1); j++) {
            line+="*";
        }
        console.log(line);
    }

    // Print the lower half of the diamond
    for (let i = n - 1; i >= 1; i--) {
        line="";
        // Print spaces
        for (let space = 1; space <= n - i; space++) {
            line+=" ";
        }
        // Print stars
        for (let j = 1; j <= (2 * i - 1); j++) {
            line+="*";
        }
        console.log(line);
    }
}   

// Let's Start Here
let rows=5;
getPrintDiamond(rows);
