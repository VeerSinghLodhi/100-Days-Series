
// Arrow Fucntion
const getReverseString=(str)=>{
    let reversed="";
    for(let i=str.length;i>=0;i--){
        reversed+=str.charAt(i);
    }
    return reversed;
}

let str="Github.com/VeerSinghLodhi";
console.log("Original String : "+str);
reversed=getReverseString(str);
console.log("Reversed String : "+reversed);