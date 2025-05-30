// Arrow Function for Bianry Search
const getBinarySearch=(arr,key)=>{
    let left=0;
    let right=arr.length-1;
    while(left<=right){
        let mid=left+Math.floor((right-left)/2);
        if(arr[mid]==key){
            return mid;
        }else if(arr[mid]<key){
            left=mid+1;
        }else{
            right=mid-1;
        }
    }
    return -1;
}
// Let's Start Here
const array=[1,2,3,4,5,6,7,8,9,10];// Sorted Array
let key = 8 ; // Value to Search
res=getBinarySearch(array,key);
if(res!=-1){
    console.log("Found at "+res);
}else{
    console.log("Not Found!!");
}