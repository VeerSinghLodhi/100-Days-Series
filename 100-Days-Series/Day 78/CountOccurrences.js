
// Function to search occurrences of a specific number in a 2D array.
const getCountOccurence=(arr,numberToSearch)=>{
    let rows=arr.length;
    let cols=arr[0].length;
    let count=0;
    for(let i=0;i<rows;i++){
        for(let j=0;j<cols;j++){
            if(arr[i][j]==numberToSearch)
                count++;
        }
    }
    return count;
}
// Let's Start Here
const arr=[
    [4, 7, 8],
    [8, 8, 7],
    [1, 7, 9]
];
let numberToSearch=7;
let count=getCountOccurence(arr,numberToSearch);
console.info("The number "+numberToSearch+" appears "+count+" times in the array.");