
# function to print hollow rectangle pattern
def get_hollow_rectangle(rows,cols):
    for i in range(1,rows+1,1):
        for j in range(1,cols+1,1):
            if i==1 or i==rows or j==1 or j==cols:
                print('* ',end="")
            else:
                print('  ',end="")
        print()

# Let's Start here
rows=int(input('Enter the number of rows : '))
cols=int(input('Enter the number of columns : '))
get_hollow_rectangle(rows,cols)