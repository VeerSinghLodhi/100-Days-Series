
// Function to number in a particular range.
const getFindNumberInRange=(arr,sr,er,number)=>{
    if(sr<0 || sr>=arr.length || sr>er){
        return -1;
    }
    for(let i=sr;i<=er;i++){
        if(arr[i]==number){
            return i;
        }
    }
    return -1;
}
// Let's Start Here
const arr=[1,2,3,4,5,6,7,8,9,10];
let sr=5;
let er=8;
let numerbToFind=6;
let res=getFindNumberInRange(arr,sr,er,numerbToFind);
if(res!=-1){
    console.log("Found at Index "+res);
}else{
    console.log("Not Found!!");
}