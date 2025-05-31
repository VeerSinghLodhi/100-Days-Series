
# Funtion for Sentinel Search Algorithm
def get_sentinel_search(arr,key):
    size=len(arr)
    last=arr[size-1]
    arr[size-1]=key
    i=0
    while arr[i]!=key:
        i+=1
    arr[size-1]=last
    if i<size-1 or arr[size-1]==key:
        return i
    else:
        return -1
    
# Let's Start Here
arr=[10,20,30,40,50,60,70]
key=40
res=get_sentinel_search(arr,key)
if res!=-1:
    print("Fount at ",res)
else:
    print("Not Found!!")