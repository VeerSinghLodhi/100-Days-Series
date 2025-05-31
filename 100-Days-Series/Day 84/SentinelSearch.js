
// Funtion for Sentinel Search Algorithm
function getSentinelSearch(arr,key){
    let size=arr.length;
    let last=arr[size-1];
    arr[size-1]=key;
    let i=0;
    while(arr[i]!=key){
        i++;
    }
    arr[size-1]=last;
    if((i<size-1)||(arr[size-1]==key))
        return i;
    else 
        return -1;
}
// Let's Start Here
const arr=[10,20,30,40,50,60,70];
let key=50;
res=getSentinelSearch(arr,key);
if(res!=-1){
    console.log("Fount at "+res);
}else{
    console.log("Not Found!!");
}