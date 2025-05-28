
# Function to calculate the sum of even integers.
def get_sum_of_even_numbers(numbers):
    evenSum=0
    for i in range(0,len(numbers)):
        if numbers[i]%2==0:
            evenSum+=numbers[i]
    return evenSum

# Function to calculate the sum of odd integers.
def get_sum_of_odd_numbers(numbers):
    oddSum=0
    for i in range(0,len(numbers)):
        if numbers[i]%2!=0:
            oddSum+=numbers[i]
    return oddSum

# Let's Start Here
n=int(input('Enter the number of integers : '))
numbers=[]
for i in range(0,n):
    print('Enter',(i+1),' integer : ',end="")
    num=int(input())
    numbers.append(num)

evenSum=get_sum_of_even_numbers(numbers)
oddSum=get_sum_of_odd_numbers(numbers)
print('The sum of even integers is : ',evenSum)
print('The sum of odd integers is : ',oddSum)
