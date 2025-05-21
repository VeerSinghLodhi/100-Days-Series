// Function to Search Insert Position
const getSearchInsertPosition=(nums,target)=>{
    let low=0;
    let high=nums.length-1;
    if(target>nums[target])
        return high+1;
    while(low<=high){
        let mid=Math.floor((low+high)/2);
        if(target==nums[mid])
            return mid;
        else if(target<nums[mid]){
            high=mid-1;
        }else{
            low=mid+1;
        }
    }
    return low;
}
// Let's Start Here
const nums=[1,2,5,6];
let target=4;
let pos=getSearchInsertPosition(nums,target);
console.log('Position is '+pos);