class MaxMinInArray {
    // Main method - Entry point of the program
    public static void main(String[] args) {
        // Let's Start here
        // Initialize the array with elements
        int arr[] = {5, 4, 6, 3, 7, 2, 7, 1, 9};

        // Initialize largest and smallest with the first element of the array
        int largest = arr[0];
        int smallest = arr[0];

        // Iterate through each element in the array
        for (int num : arr) {
            // Update largest if the current element is greater
            if (largest < num)
                largest = num;

            // Update smallest if the current element is smaller
            if (smallest > num)
                smallest = num;
        }

        // Print the largest and smallest values
        System.out.println("Largest " + largest + ", Smallest " + smallest);
    }
}
