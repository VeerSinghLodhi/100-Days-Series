
# Function for Binary Search
def get_binary_search(arr,key):
    left,right=0,len(arr)-1
    while left<=right:
        mid=left+(right-left)//2
        if arr[mid]==key:
            return mid
        elif arr[mid]<key:
            left=mid+1
        else:
            right=mid-1
    return -1

# Let's Start Here
arr=[1,2,3,4,5,6,7,8,9,10] # Sorted List or Array
key=9
res=get_binary_search(arr,key)
if res!=-1:
    print('Fount at',res)
else:
    print('Not Found!!')
