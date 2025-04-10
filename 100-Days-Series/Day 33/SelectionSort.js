
// Arrow Function for selection sort
const getSelectionSort=(arr)=>{
    for(let i=0;i<arr.length;i++){
        let minIndex=i;
        for(let j=i+1;j<arr.length;j++){
            if(arr[j]<arr[minIndex])
                minIndex=j;
        }
        let temp=arr[minIndex];
        arr[minIndex]=arr[i];
        arr[i]=temp;
    }
    return arr;
}
// Let's Start here
arr=new Array(4,3,5,6,2,1,7,9,8);
console.log("Before Sorting..");
console.log(arr);
console.log("After Selection Sorting..");
console.log(getSelectionSort(arr));