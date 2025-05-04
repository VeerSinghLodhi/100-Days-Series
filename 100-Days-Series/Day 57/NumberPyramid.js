
// Arrow Function to print Pyramid
const getPrintNumberPyramid=(n)=>{
    for(let i=1;i<=n;i++){
        line="";
        // collect spaces
        for(let j=i;j<n;j++){
            line+=" ";
        }
        // collect ascending numbers
        for(let j=1;j<=i;j++){
            line+=j;
        }
        // collect descending numbers
        for(let j=i-1;j>=1;j--){
            line+=j;
        }
        console.log(line);
    }
}
// Let's Start here
rows=5;
getPrintNumberPyramid(rows);