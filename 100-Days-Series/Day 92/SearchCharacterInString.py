
# Function to find character in a string
def get_find_character(str,ch):
    for i in range(0,len(str)):
        if str[i]==ch:
            return i
    return -1

# Let's Start Here
str=input('Enter a string : ')
ch=input('Enter Character to find : ')
res=get_find_character(str,ch)
if res!=-1:
    print("Found at Index ",res)
else:
    print("Not Found!")