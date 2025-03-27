
// Arrow Function for remove duplicate elements of an array
let size;
const getRemoveDuplicateElements=(arr)=>{
    size=arr.length;
    temp=new Array();
    let index=0;
    let j;
    for(let i=0;i<size;i++){
        for(j=0;j<index;j++){
            if(arr[i]==arr[j])
                break;
        }
        if(j==index){
            temp[index++]=arr[i];
        }
    }
    size=index;
    return temp;
}

// Let's Start here
// An Array Constant values.
arr=new Array(1,2,3,1,1,3,4,5);
// Call the function for remove duplicate elements.
carr=getRemoveDuplicateElements(arr);
// Array after removing duplicates elements 
for(let i=0;i<size;i++){
    console.log(" "+carr[i]);
}