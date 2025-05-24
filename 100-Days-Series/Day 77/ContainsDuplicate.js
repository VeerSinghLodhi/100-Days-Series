
// Function to check if the array has duplicate values.
const getCheck=(arr)=>{
    // Bubble Sort
    for(let i=0;i<arr.length;i++){
        for(let j=0;j<arr.length-i-1;j++){
            if(arr[j]>arr[j+1]){
                let temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    // Check for duplicates in the sorted array
    for(let i=0;i<arr.length-1;i++){
        if(arr[i]==arr[i+1])
            return true;
    }
    return false;
}
// Let's Start Here
const arr1=[1,2,3,1];
const arr2=[1,2,3,4];
const arr3=[1, 1, 1, 3, 3, 4, 2, 4, 2];
result1=getCheck(arr1);
result2=getCheck(arr2);
result3=getCheck(arr3);
console.log("Result 1 : "+result1);
console.log("Result 2 : "+result2);
console.log("Result 3 : "+result3);