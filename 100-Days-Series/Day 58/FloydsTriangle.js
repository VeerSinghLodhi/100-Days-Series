
// Functiont to print Floyd's Triangle
const getPrintFloydsTriangle=(rows)=>{
    let num=1;
    for(let i=1;i<=rows;i++){
        line="";
        for(let j=1;j<=i;j++){
            line+=" "+num++;
        }
        console.log(line);
    }
}
// Let's Start here
let rows=5
getPrintFloydsTriangle(rows);