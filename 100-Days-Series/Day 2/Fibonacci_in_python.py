
firstTerm=0
secondTerm=1
num=int(input("Enter Term of Series : "))
print(firstTerm," ",secondTerm,end=" ")
for i in range(0,num,1):
    nextTerm=firstTerm+secondTerm
    print(nextTerm,end=" ")
    firstTerm=secondTerm
    secondTerm=nextTerm
    