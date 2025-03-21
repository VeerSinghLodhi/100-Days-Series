
// Arrow Function for print pyramid pattern
const getPrintPyramidPattern=(rows)=>{
    for(let i=1;i<=rows;i++){
        // Collect spaces
        let spaces='';
        for(let j=1;j<=rows-i;j++){
            spaces+=' ';
        }
        // Collect Stars
        let stars='';
        for(let k=1;k<=(2*i-1);k++){
            stars+='*';
        }
        // Print and Move to the next line
        console.log(spaces+stars);
    }
}

// Let's Start here
let rows=10 // Constant rows
// Call the function for print pyramid pattern
getPrintPyramidPattern(rows);