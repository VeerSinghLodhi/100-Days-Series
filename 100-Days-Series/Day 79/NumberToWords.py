
# Array to map digits to their English words
words=["zero","one","two","three","four","five","six","seven","eight","nine"]
# Recursive function to convert number to words.
def get_convert_number_to_words(number):
    # Base Case : if the number is 0, stop recursion
    if number==0:
        return ""
    # Recursive call
    result=get_convert_number_to_words(number//10)
    result+=words[number%10]+" "
    return result

# Let's Start Here
number=int(input("Enter a number : "))
if number==0:
    print("Zero")
else:
    result=get_convert_number_to_words(number)
    print(result)