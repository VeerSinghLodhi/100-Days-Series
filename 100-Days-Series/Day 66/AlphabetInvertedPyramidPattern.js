// Arrow function to print Alphabet Inverted Pyramid Pattern
const getPrintPattern=(rows)=>{
    for(let i=rows;i>=1;--i){
        line="";
        ch=65;
        for(let j=1;j<=i;j++){
            line+=String.fromCharCode(ch++) + " "; 
            // Convert ASCII value to character and add a space
        }
        console.log(line);
    }
}

// Let's Start Here
rows=5;
getPrintPattern(rows);