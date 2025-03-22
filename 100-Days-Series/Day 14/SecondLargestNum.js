
// Arrow Function find the second largest number
const getSecondLargestNumber=(arr)=>{
    for(let i=0;i<arr.length-1;i++){
        for(let j=0;j<arr.length-i-1;j++){
            if(arr[j]>arr[i+1]){
                arr[j]=arr[j]+arr[i+1];
                arr[i+1]=arr[j]-arr[i+1];
                arr[j]=arr[j]-arr[i+1];
            }
        }
        
    }
    return arr[arr.length-1];
}

arr=new Array(5,3,6,8,2,7);
sLargestNumber=getSecondLargestNumber(arr);
console.log("The Second Largest number is "+sLargestNumber);