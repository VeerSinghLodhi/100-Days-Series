
// Function to find all occurrences of a key in the array
const getfindOccurrence=(arr,key,index)=>{
    let len=arr.length;
    // Base case: if the current index reaches the size of the array, stop recursion
    if(len==index){
        return;
    }
    // If the current element matches the key, print its index
    if(arr[index]==key){
        console.log(index);
    }
    // Recursive call to check the next element
    getfindOccurrence(arr,key,++index);
}
// Let's Start Here
const arr=[3, 2, 4, 5, 6, 2, 7, 2, 2];
let key=2;
getfindOccurrence(arr,key,0);