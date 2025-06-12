
# Function to find the sum of negative numbers in the array
def get_sum_of_negative_numeber(arr):
    sum=0
    for i in range(0,len(arr)):
        if arr[i]<0:
            sum+=arr[i]

    return sum

# Let's Start Here
arr=[5,4,-6,-7,-9,1,]
result=get_sum_of_negative_numeber(arr)
print('Sum of Negative Numbers : ',result)