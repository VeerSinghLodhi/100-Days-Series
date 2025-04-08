function isLowerCase(char) {
    return char === char.toLowerCase() && char !== char.toUpperCase();
}
function isUpperCase(char) {
    return char === char.toUpperCase() && char !== char.toLowerCase();
}
//Arrow Function for ToggleCase
const getToggleCase=(str)=>{
    result="";
    for(let i=0;i<str.length;i++){
        let ch=str.charAt(i);
        if(isUpperCase(ch)){
            result+=ch.toLowerCase();
        }else if(isLowerCase(ch)){
            result+=ch.toUpperCase();
        }else{
            result+=ch;
        }
    }
    return result;
}
// Let's Start here
let str="Hello, World!";
console.log("Original String : "+str);
toggledString=getToggleCase(str);
console.log("Toggled String : "+toggledString);