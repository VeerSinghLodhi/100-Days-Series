public class MissingNumberInArray {
    // Function to find the missing number in an array
    public static int getMissingNumber(int[] arr, int size) {
        int n = size + 1; // Actual range (1 to n)
        int totalSum = n * (n + 1) / 2; // Sum of 1 to n
        int arraySum = 0;
        for (int num : arr) {
            arraySum += num;
        }
        return totalSum - arraySum;
    }
    // Main method
    public static void main(String[] args) {
        // Let's Start Here
        int[] arr = {1, 2, 4, 5, 6}; // Example
        int size = arr.length; // Number of elements in the array
        int missingNumber = getMissingNumber(arr, size);

        System.out.println("Missing number is: " + missingNumber);
    }
}
