
// Arrow Function to print Inverted Half Pyramid
const getPrintPyramid=(rows)=>{
    for(let i=rows;i>=1;i--){
        line="";
        for(let j=1;j<=i;j++){
            line+=j+" ";
        }
        console.log(line);
    }
}

// Let's Start here
let rows=6;
getPrintPyramid(rows);