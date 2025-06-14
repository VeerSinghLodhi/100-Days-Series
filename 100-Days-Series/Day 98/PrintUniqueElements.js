
// Function to print unique elements.
const getPrintUniqueElements=(arr)=>{
    uniqueElements=[];
    k=0;
    for(let i=0;i<arr.length;i++){
        isUnique=true;
        for(let j=0;j<arr.length;j++){
            if(i!=j && arr[i]==arr[j]){
                isUnique=false;
            }
        }
        if(isUnique){
            uniqueElements[k++]=arr[i];
        }
    }
    console.log("Unique elements : "+uniqueElements);
}
const arr=[4, 5, 6, 4, 7, 8, 6];
console.log("Array : "+arr);
getPrintUniqueElements(arr);