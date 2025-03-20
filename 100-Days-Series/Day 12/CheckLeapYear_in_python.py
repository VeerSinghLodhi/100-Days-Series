
# Function for check leap year
def getCheckLeapYear(year):
    # Check if the year is divisible by 4 but not by 100, 
    # Or if it is divisible by 400
    if year%4==0 and year%100!=0 or year%400==0:
        return True
    else:
        return False
    
# Let's Start here
# Prompt the user to enter a year
year=int(input('Enter a year to check it\'s a leap year : '))
# Call the function and display the result
res=getCheckLeapYear(year)
if res:
    print(year,' is a Leap Year!!')
else:
    print(year,' is not a Leap Year!!')