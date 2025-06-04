
// Function to find Perfect Cube Number between 1 to N.
const getFindPerfectCubeNumber=(n)=>{
    for(let i=1;i<=n;i++){
        let res=i*i*i;
        if(res>n){
            break;
        }
        console.log(res);
    }
}
// Let's Start Here
let n=30;
console.log("Perfect Cube Number between 1 to "+n+" : ");
getFindPerfectCubeNumber(n);