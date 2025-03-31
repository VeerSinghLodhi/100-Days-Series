
// Arrow Function for merge two sorted arrays
const getMergeTwoArrays=(arr1,arr2)=>{
    let size1=arr1.length;
    let size2=arr2.length
    let i=0,j=0,k=0;
    mergedArray=new Array(size1+size2);
    // Traverse both arrays
    while(i<size1 && j<size2){
        if(arr1[i]<=arr2[j]){
            mergedArray[k++]=arr1[i++];
        }else{
            mergedArray[k++]=arr2[j++];
        }
    }
    // Store Remaining elements of arr1
    while(i<size1){
        mergedArray[k++]=arr1[i++];
    }
    // Store Remaining elements of arr2
    while(j<size2){
        mergedArray[k++]=arr2[j++];
    }
    return mergedArray;
}
// Let's Start here
arr1=new Array(1,3,5,7,9);
arr2=new Array(2,4,6,8,10);
mergedArray=getMergeTwoArrays(arr1,arr2);
// print the merged array
for(let i=0;i<mergedArray.length;i++){
    console.log(" "+mergedArray[i]);
}