
// Function to find Character in a string
const getFindCharacter=(str,ch)=>{
    for(let i=0;i<str.length;i++){
        if(str.charAt(i)==ch){
            return i;
        }
    }
    return -1;
}
// Let's Start Here
const str="Veer Singh Lodhi";
const ch='m';
res=getFindCharacter(str,ch);
if(res!=-1)
    console.log("Found at Index "+res);
else
    console.log("Not Found!!");