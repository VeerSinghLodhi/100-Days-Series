
// Function to merge two sorted halves of the array
const merge=(arr,s,e)=>{
    let mid=Math.floor((s+e)/2);
    let i=s;
    let k=s;
    let j=mid+1;
    temp=[]
    while(i<=mid && j<=e){
        if(arr[i]<arr[j])
            temp[k++]=arr[i++];
        else
            temp[k++]=arr[j++];
    }
    while(i<=mid){
        temp[k++]=arr[i++];
    }
    while(j<=e){
        temp[k++]=arr[j++];
    }
    for(let i=s;i<=e;i++){
        arr[i]=temp[i];
    }
}
// Recursive function to perform Merge Sort
const getMergeSort=(arr,s,e)=>{
    if(s>=e)
        return;
    let mid=Math.floor((s+e)/2);
    getMergeSort(arr,s,mid);
    getMergeSort(arr,mid+1,e);
    merge(arr,s,e);
}
// Let's Start Here
const arr=[5,4,6,3,7,8];
console.log("Before Soring..");
console.log(arr);
getMergeSort(arr,0,arr.length-1);
console.log("After Sorting..");
console.log(arr);
