

// Arrow Function to remove spaces from a string 
const getRemoveSpace=(str)=>{
    temp="";
    for(let i=0;i<str.length;i++){
        ch=str.charAt(i);
        if(ch!=' ')
            temp+=ch;
    }
    return temp;
}
// Let's Start here
str="Full Stack Developer";
console.log("String with spaces : "+str);
console.log("String without spaces : "+getRemoveSpace(str));