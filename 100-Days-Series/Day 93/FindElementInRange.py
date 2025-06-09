
# Function to find number in a particular range.
def get_find_number_in_range(arr,sr,er,number):
    if sr<0 or er>=len(arr) or sr>er:
        return -1
    
    for i in range(sr,er+1,1):
        if arr[i]==number:
            return i
        
    return -1

# Let's Start Here
arr=[1,2,3,4,5,6,7,8,9,10]
sr=4
er=7
numberToFind=6
res=get_find_number_in_range(arr,sr,er,numberToFind)
if res!=-1:
    print('Found at Index ',res)
else:
    print('Not Found!!')