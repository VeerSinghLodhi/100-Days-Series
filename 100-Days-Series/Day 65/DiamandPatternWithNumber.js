// Arrow Function to print Diamand Pattern With Numbers.
const getPrintPattern=(rows)=>{
    // Upper Part 
    for(let i=1;i<=rows;i++){
        line="";
        for(let space=1;space<=rows-i;space++){
            line+=" ";
        }
        for(let j=1;j<=(2*i-1);j++){
            line+=i;
        }
        console.log(line);
    }
    // Lower Part
    for(let i=rows-1;i>=1;i--){
        line="";
        for(let space=1;space<=rows-i;space++){
            line+=" ";
        }
        for(let j=1;j<=(2*i-1);j++){
            line+=i;
        }
        console.log(line);
    }
}

// Let's Start Here
let rows=5;
getPrintPattern(rows);