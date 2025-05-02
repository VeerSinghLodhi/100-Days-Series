const printButterfly = (n) => {
    // Upper part of the butterfly
    for (let i = 1; i <= n; i++) {
        let line = "";
        for (let j = 1; j <= i; j++) {
            line += "*"; // Left stars
        }
        for (let j = 1; j <= 2 * (n - i); j++) {
            line += " "; // Spaces
        }
        for (let j = 1; j <= i; j++) {
            line += "*"; // Right stars
        }
        console.log(line);
    }

    // Lower part of the butterfly
    for (let i = n; i >= 1; i--) {
        let line = "";
        for (let j = 1; j <= i; j++) {
            line += "*"; // Left stars
        }
        for (let j = 1; j <= 2 * (n - i); j++) {
            line += " "; // Spaces
        }
        for (let j = 1; j <= i; j++) {
            line += "*"; // Right stars
        }
        console.log(line);
    }
};

// Example usage
printButterfly(4);
