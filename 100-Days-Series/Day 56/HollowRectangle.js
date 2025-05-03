
// arrow function to print hollow rectangle pattern
const getHollowRectangle=(rows,cols)=>{
    for(let i=1;i<=rows;i++){
        line="";
        for(let j=1;j<=cols;j++){
            if(i==1 || i==rows || j==1 || j==cols){
                line+="* ";
            }
            else{
                line+="  ";
            }
        }
        console.log(line);
    }
}
// Let's Start here
let rows=5;
let cols=10;
getHollowRectangle(rows,cols);;