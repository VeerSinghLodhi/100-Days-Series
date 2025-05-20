class ValidParentheses{
    public static boolean isValidParentheses(String str){
        java.util.Stack<Character> stack=new java.util.Stack<>();
        for(char ch:str.toCharArray()){
            if(ch=='(' || ch=='[' || ch=='{'){
                stack.push(ch);
            }else if(ch==')' || ch==']' || ch=='}'){
                if(stack.isEmpty() || !isMatchingPair(stack.peek(), ch)){
                    return false;
                }
                stack.pop();
            }
        }
        return stack.isEmpty();
    }
    public static boolean isMatchingPair(char open,char close){
        return (open=='(' && close==')')||
                (open=='[' && close==']')||
                (open=='{' && close=='}');
    }
    // Main Method
    public static void main(String [] args){
        // Let's Start Here
        String str="()[]{}";
        boolean res=isValidParentheses(str);
        if(res){
            System.out.println("Valid Parentheses");
        }else{
            System.out.println("Invalid Parentheses");
        }
    }
}