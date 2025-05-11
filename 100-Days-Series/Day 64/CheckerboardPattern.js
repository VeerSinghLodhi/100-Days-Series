
// Arrow Funtion to print Checkerboard Pattern
const getPrintCheckerboard=(n)=>{
    for(let i=1;i<=n;i++){
        line="";
        for(let j=1;j<=n;j++){
            if((i+j)%2==0){
                line+="* ";
            }else{
                line+="  ";
            }
        }
        console.log(line);
    }
}

// Let's Start Here
let n=5;
getPrintCheckerboard(n);