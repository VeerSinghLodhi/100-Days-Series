
// Function to check if an array is a palindrome.
const getCheckPalindrome=(arr)=>{
    let start=0;
    let end=arr.length-1;
    while(start<end){
        if(arr[start]!=arr[end]){
            return false;
        }
        start++;
        end--;
    }
    return true;
}
// Let's Start Here
const arr=[1,2,3,2,1];
console.log("Array : "+arr);
result=getCheckPalindrome(arr);
if(result){
    console.log("The Array is a Palindrome.");
}else{
    console.log("The Array is not a Palindrome.");
}