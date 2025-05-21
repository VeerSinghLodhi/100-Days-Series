
# Function to Search Insert Position
def get_search_insert_position(nums,target):
    low,high=0,len(nums)-1
    if target>nums[high]:
        return high+1
    while low<=high:
        mid=(low+high)//2
        if target==nums[mid]:
            return mid
        elif target<nums[mid]:
            high=mid-1
        else:
            low=mid+1
    return low

# Let's Start Here
nums=[1,3,5,6]
target=3
pos=get_search_insert_position(nums,target)
print('Position is ',pos)
