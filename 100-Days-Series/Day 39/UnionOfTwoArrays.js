// Function to find unique elements
const getUnion=(arr1,arr2)=>{
    uniArray=new Array(arr1.length+arr2.length);
    let k=0;
    for(let i=0;i<arr1.length;i++){
        uniArray[k++]=arr1[i];
    }
    for(let i=0;i<arr2.length;i++){
        isPresent=false;
        for(let j=0;j<k;j++){
            if(arr2[i]==uniArray[j]){
                isPresent=true;
                break;
            }
        }
        if(!isPresent){
            uniArray[k++]=arr2[i];
        }
    }
    console.log("Union of arrays : ");
    for(let i=0;i<k;i++){
        console.log(uniArray[i]);
    }
}
// Let's Start here
arr1=[1,2,3,4,5,6,7,8];
arr2=[5,6,7,8,9,10,10];
getUnion(arr1,arr2);