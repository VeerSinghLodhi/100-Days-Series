
// Function for count Even & Odd
const getCountEvenOdd=(arr)=>{
    let countEven=0;
    let countOdd=0;
    for(let i=0;i<arr.length;i++){
        if(arr[i]%2==0){
            countEven++;
        }else{
            countOdd++;
        }
    }
    console.log("Even Numbers : "+countEven);
    console.log("Odd Numbers : "+countOdd);
}

// Let's Start Here
const arr=[1,2,3,4,5,6,7,8,9,10];
getCountEvenOdd(arr);