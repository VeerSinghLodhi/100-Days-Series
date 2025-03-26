
def getCountVowels(str):
    countVowels=0
    for i in range(0,len(str),1):
        ch=str[i]
        if ch=='a' or ch=='e' or ch=='i' or ch== 'o' or ch=='u' or ch=='A' or ch=='E' or ch=='I' or ch== 'O' or ch=='U':
            countVowels+=1
    return countVowels

def getCountConsonants(str):
    countConsonants=0
    for i in range(0,len(str),1):
        ch=str[i]
        if ch!='a' or ch!='e' or ch!='i' or ch!= 'o' or ch!='u' or ch!='A' or ch!='E' or ch!='I' or ch!= 'O' or ch!='U':
            countConsonants+=1
    return countConsonants

string=input("Enter a String : ")
countVowels=getCountVowels(string)
countConsonants=getCountConsonants(string)
print(string,' in this String...')
print('Total Vowels are : ',countVowels)
print('Total Consonants are : ',countConsonants)