
// Arrow Function for bubble sort
const getBubbleSort=(arr)=>{
    for(let i=0;i<arr.length-1;i++){
        for(let j=0;j<arr.length-1-i;j++){
            if(arr[j]>arr[j+1]){
                arr[j]=arr[j]+arr[j+1];
                arr[j+1]=arr[j]-arr[j+1];
                arr[j]=arr[j]-arr[j+1];
            }
        }
    }
    return arr;
}

// Let's Start here
arr=new Array(4,3,5,2,6,7,8,1);
console.log("Before Sorting..");
console.log(arr);
console.log("After Bubble Sorting..");
console.log(getBubbleSort(arr));