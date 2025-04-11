// Function for Insertion Sort
const getInsertionSort=(arr)=>{
    for(let i=1;i<arr.length;i++){
        let key=arr[i];
        let j=i-1;
        while(j>=0 && arr[j]>key){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;
    }
}
// Let's Start here
arr=new Array(3,4,5,1,7,6,8,9);
console.log("Before Sorting...");
console.log(arr);
console.log("After Sorting...");
getInsertionSort(arr);
console.log(arr);