
# Function to search occurrences of a specific number in a 2D array.
def get_count_occurrence(arr,numberToSearch):
    rows=len(arr)
    cols=len(arr[0])
    count=0
    for i in range(0,rows):
        for j in range(0,cols):
            if arr[i][j]==numberToSearch:
                count+=1
    return count

# Let's Start Here
arr=[
    [4, 7, 8],
    [8, 8, 7],
    [1, 7, 9]
]
numberToSearch=int(input("Enter number to search occurrence in the array : "))
count=get_count_occurrence(arr,numberToSearch)
print('The number ',numberToSearch,' appears ',count,' times in the array.')