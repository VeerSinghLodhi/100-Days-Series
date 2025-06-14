
# Function to print unique elements.
def get_print_qnique_elements(arr):
    print('Unique elements : ',end="")
    for i in range(0,len(arr)):
        isUnique=True
        for j in range(0,len(arr)):
            if i!=j and arr[i]==arr[j]:
                isUnique=False
                break
        if isUnique:
            print(arr[i],end=" ")

# Let's Start Here
arr=[4, 5, 6, 4, 7, 8, 6]
print(f'Array : {arr}')
get_print_qnique_elements(arr)
        