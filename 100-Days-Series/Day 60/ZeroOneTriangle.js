
let n = 5; // Number of rows
for (let i = 1; i <= n; i++) {
    let start;
    if (i % 2 === 0) {
        start = 0; // Even row starts with 0
    } else {
        start = 1; // Odd row starts with 1
    }

    let row = "";
    for (let j = 1; j <= i; j++) {
        row += start + " ";
        if (start === 1) {
            start = 0;
        } else {
            start = 1;
        }
    }
    console.log(row.trim());
}
