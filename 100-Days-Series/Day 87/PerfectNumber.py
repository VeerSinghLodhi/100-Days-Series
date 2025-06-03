
# Function to print perfect number Square between 1 to N
def get_print_perfect_square_number(n):
    for i in range(1,n+1,1):
        res=i*i
        if(res>n):
            break
        print(res,end=" ")

# Let's Start Here
n=int(input('Enter the value of N : '))
print('Perfect Square Number between 1 and',n,' :')
get_print_perfect_square_number(n)