def is_valid_parentheses(str):
    stack=[]
    for ch in str:
        if ch in '([{':
            stack.append(ch)
        elif ch in ')]}':
            if not stack or not is_matching_pair(stack[-1],ch):
                 return False
            stack.pop()

    return not stack;  

def is_matching_pair(open, close):
        return (open == '(' and close == ')') or \
               (open == '[' and close == ']') or \
               (open == '{' and close == '}')

str = "()[{}]{}"
res = is_valid_parentheses(str)
if res:
    print("Valid Parentheses")
else:
    print("Invalid Parentheses")