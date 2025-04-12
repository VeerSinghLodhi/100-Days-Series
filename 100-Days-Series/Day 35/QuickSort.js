
const partition=(arr,low,high)=>{
    pivot=arr[high];
    i=low-1;
    for(let j=low;j<high;j++){
        if(arr[j]<=pivot){
            i++;
            let temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }
    let temp = arr[i + 1];
    arr[i + 1] = arr[high];
    arr[high] = temp;
    return i+1;// Return the pivot index
}
// Method for Quick Sort
const getQuickSort=(arr,low,high)=>{
    if(low<high){
        let pivotIndex=partition(arr,0,high);
        getQuickSort(arr,low,pivotIndex-1);
        getQuickSort(arr,pivotIndex+1,high);
    }
}
// Let's Start here
arr=new Array(3,2,4,1,5,6,9,8,7);
console.log("Before Sorting..");
console.log(arr);
console.log("After Quick Sorting..");
getQuickSort(arr,0,arr.length-1);
console.log(arr);