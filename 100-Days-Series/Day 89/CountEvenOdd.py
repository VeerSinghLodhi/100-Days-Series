
# Function for count Even & Odd
def get_count_even_odd(arr):
    countEven=0
    countOdd=0
    for i in arr:
        if i%2==0:
            countEven+=1
        else:
            countOdd+=1

    print("Even Numbers : ",countEven)
    print("Odd Numbers : ",countOdd)

# Let's Start Here
sz=int(input('Enter the size of array : '))
arr=[]
print('Enter elements of the array:')
for i in range(0,sz,1):
    print('Enter',(i+1),' element : ',end="")
    val=int(input())
    arr.append(val)
get_count_even_odd(arr)
