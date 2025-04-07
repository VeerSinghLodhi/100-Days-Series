
# Function to check if sentence is a pangram
def is_pangram(sentence):
    sentence=sentence.lower()
    letters=set()
    for ch in sentence:
        if ch>='a' and ch<='z':
            letters.add(ch)
            
    return len(letters)==26

# Let's Start here
sentence="The quick brown fox jumps over the lazy dog"
if is_pangram(sentence):
    print("This sentence is a pangram.")
else:
    print("This sentence is not a pangram.")