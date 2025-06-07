
# Function to calculate factorial
def getFactorial(n):
    if n==0 or n==1:
        return 1
    return n*getFactorial(n-1)

# Function to calculate the nth Catalan number
def getCatalan(n):
    return getFactorial(2*n)/(getFactorial(n+1)*getFactorial(n))

# Let's Start Here
n=int(input('Enter the number of terms (N) : '))
print('Catalan numbers up to ',n,' terms : ')
for i in range(0,n):
    print(getCatalan(i),end=" ")