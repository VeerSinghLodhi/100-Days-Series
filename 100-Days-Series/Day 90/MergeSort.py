
# Function to merge two sorted halves of the array
def merge(arr,s,e):
    mid=(s+e)//2
    i,j,k=s,mid+1,s
    temp = [0] * (e + 1)  # Initialize temp with the correct size
    while i<=mid and j<=e:
        if arr[i]<arr[j]:
            temp[k]=arr[i]
            i+=1
        else:
            temp[k]=arr[j]
            j+=1
        k+=1
    while i<=mid:
        temp[k]=arr[i]
        k+=1
        i+=1
    while j<=e:
        temp[k]=arr[j]
        k+=1
        j+=1
    for i in range(s,e+1,1):
        arr[i]=temp[i]
# Recursive function to perform Merge Sort
def get_merge_sort(arr,s,e):
    if s>=e:
        return
    mid=(s+e)//2
    get_merge_sort(arr,s,mid)
    get_merge_sort(arr,mid+1,e)
    merge(arr,s,e)

# Let's Start Here
arr=[5,4,6,3,7,8]
print('Before Soring..')
print(arr)
get_merge_sort(arr,0,len(arr)-1)
print('After Soring..')
print(arr) 