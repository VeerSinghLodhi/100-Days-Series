public class PermutationsOfAString {
    // Function to swap characters in a string
    private static void swap(char[] str, int i, int j) {
        char temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
    // Recursive function to generate permutations
    private static void permute(char[] str, int l, int r) {
        if (l == r) {
            System.out.println(String.valueOf(str)); // Print the permutation
        } else {
            for (int i = l; i <= r; i++) {
                swap(str, l, i); // Swap current character with the leftmost character
                permute(str, l + 1, r); // Recur for the rest of the string
                swap(str, l, i); // Backtrack to the original configuration
            }
        }
    }
    // Main Method
    public static void main(String[] args) {
        // Let's Start Here
        String str = "ABC";
        char[] charArray = str.toCharArray(); // Convert string to character array
        System.out.println("All permutations of the string \"" + str + "\" are:");
        permute(charArray, 0, charArray.length - 1);
    }
}
