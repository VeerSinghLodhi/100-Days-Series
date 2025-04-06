
# Let's Start here
sentence=input("Enter a sentence : ")

if sentence.strip()=="":
    print("The number of words in the sentence is : 0")
else :
    words=sentence.strip().split()
    print("The number of words in the sentence is : ",len(words))
    