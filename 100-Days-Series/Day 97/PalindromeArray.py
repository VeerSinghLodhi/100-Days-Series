
# Function to check if a array is a palindrome.
def get_check_palindrome(arr):
    start=0
    end=len(arr)-1
    while start<end:
        if arr[start]!=arr[end]:
            return False
        start+=1
        end-=1
    return True

# Let's Start Here
arr=[1,2,3,2,1]
print(f'Array : {arr}')
result=get_check_palindrome(arr)
if result:
    print('The Array is a palindrome.')
else:
    print('The Array is not a palindrome.')
    
