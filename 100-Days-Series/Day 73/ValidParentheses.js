class ValidParentheses{
    static isValidParentheses(str){
        const stack=[];// Use an array as a stack
        for(let ch of str){
            if(ch=='(' || ch=='[' || ch=='{'){
                stack.push(ch);        
            }else if(ch==')' || ch==']' || ch=='}'){
                if(stack.length===0 || !this.isMatchingPair(stack[stack.length-1],ch))
                    return false;
                stack.pop();
            }
        }
        return stack.length===0;
    }
    static isMatchingPair(open,close){
        return (open==='(' && close===')') ||
            (open==='[' && close===']') ||
            (open==='{' && close==='}');
    }
}
// Let's Start Here
const str="()[]{}";
const res=ValidParentheses.isValidParentheses(str);
if(res){
    console.log("Valid Parentheses");
}else{
    console.log("Invalid Parentheses");
}