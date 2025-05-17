
# Funtion to find two numbers that add up to a specific target
def get_find(arr,target):
    for i in range (0,len(arr)):
        for j in range(i+1,len(arr),1):
            if arr[i]+arr[j]==target:
                print('Indices :',i,', ',j)
                return 
            
    print('No Solution Found')

# Let's Start Here
arr=[2,3,5,7,8,12,19]
target=15
get_find(arr,target)