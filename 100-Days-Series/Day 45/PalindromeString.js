// Arrow function to check if string is a palindrome or not
const getCheckPalindrome=(str)=>{
    let temp="";
    for(let i=str.length-1;i>=0;i--){
        temp+=str.charAt(i);
    }
    return str===temp;
}

// Let's Start here
str="madam";
if(getCheckPalindrome(str))
    console.log("String is a Palindrome");
else
    console.log("String is not a Palindrome");