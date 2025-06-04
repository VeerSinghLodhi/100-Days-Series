
# Function to find Perfect Cube Number between 1 to N
def get_find_perfect_cube_number(n):
    for i in range(1,n+1,1):
        res=i*i*i
        if res>n:
            break
        print(res,end=" ")


# Let's Start Here
n=int(input('Enter the value of N : '))
print('Perfect Cube Number between 1 to ',n,' :')
get_find_perfect_cube_number(n)