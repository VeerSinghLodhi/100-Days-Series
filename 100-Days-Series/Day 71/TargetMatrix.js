
// Function to search for a target in the matrix.
const getFindTarget=(matrix,target)=>{
    let rows=matrix.length;
    let cols=matrix[0].length;
    let left=0;
    let right=rows*cols-1;
    while(left<=right){
        let mid=left+Math.floor((right-left)/2);
        let midValue=matrix[Math.floor(mid/cols)][mid%rows];
        if(midValue==target){
            return true;
        }else if(midValue<=target){
            left=mid+1;
        }else{
            right=mid-1;
        }
    }
    return false;
}
// Let's Start Here
const matrix=[
    [1,2,3],
    [4,5,6],
    [7,8,9]
];
let target=7;
res=getFindTarget(matrix,target);
if(res)
    console.log("Target "+target+" exists in the matrix.");
else
    console.log("Target "+target+" does not exist in the matrix.");