
// Arrow Funtion to find two numbers that add up to a specific target
const getFind=(arr,target)=>{
    for(let i=0;i<arr.length;i++){
        for(let j=i+1;j<arr.length;j++){
            if(arr[i]+arr[j]==target){
                console.log("Indices : "+i+", "+j);
                return;
            }
        }
    }
    console.log("No Solution Found");
}
// Let's Start Here
const arr=new Array(2,3,4,5,6,10,22);
let target=11;
getFind(arr,target);