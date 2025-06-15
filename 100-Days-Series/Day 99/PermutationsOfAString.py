
# Function to swap characters in a string
def swap(s, i, j):
    char_list = list(s)  # Convert string to list for mutability
    char_list[i], char_list[j] = char_list[j], char_list[i]
    return ''.join(char_list)  # Convert list back to string

# Recursive function to generate permutations
def permute(s, l, r):
    if l == r:
        print(s)  # Print the permutation
    else:
        for i in range(l, r + 1):
            s = swap(s, l, i)  # Swap current character with the leftmost character
            permute(s, l + 1, r)  # Recur for the rest of the string
            s = swap(s, l, i)  # Backtrack to the original configuration

# Let's Start Here
s = "ABC"
print(f"All permutations of the string \"{s}\" are:")
permute(s, 0, len(s) - 1)
