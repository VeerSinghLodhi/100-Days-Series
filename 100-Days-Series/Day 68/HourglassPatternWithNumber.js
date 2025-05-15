// Function to print Hourglass Pattern with number.
function getPrintPattern(n){
    for (let i = n; i >= 1; i--) {
        line="";
        for (let j = 0; j < n - i; j++) {
            line+="  ";
        }
        for (let j = 1; j <= 2 * i - 1; j++) {
            line+=j+" ";
        }
        console.log(line);
    }
    for (let i = 2; i <= n; i++) {
        line="";
        for (let j = 0; j < n - i; j++) {
            line+="  ";
        }
        for (let j = 1; j <= 2 * i - 1; j++) {
            line+=j+" ";
        }
        console.log(line);
    }
}

// Let's Start Here
rows = 5;
getPrintPattern(rows);