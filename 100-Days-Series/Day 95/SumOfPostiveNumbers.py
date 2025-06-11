

# Function to find the sum of positive numbers in the array.
def get_sum_of_positive_numbers(arr):
    sum=0
    for i in range(0,len(arr)):
        if arr[i]>0:
            sum+=arr[i]

    return sum

# Let's Start Here
arr=[-2, 3, 4, -1, 5]
result=get_sum_of_positive_numbers(arr)
print('Sum of positive numbers : ',result)