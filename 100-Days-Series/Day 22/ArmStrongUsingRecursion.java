public class ArmStrongUsingRecursion {
    // Recursive method to calculate power of a number
    private static int power(int base, int exp) {
        if (exp == 0) {
            return 1; // Base case: anything to the power of 0 is 1
        }
        return base * power(base, exp - 1); // Recursive step
    }

    // Recursive method to calculate the sum of digits raised to the power
    private static int armstrongSum(int num, int power) {
        if (num == 0) {
            return 0; // Base case
        }
        int digit = num % 10; // Get the last digit
        return power(digit, power) + armstrongSum(num / 10, power); // Recursive step
    }

    // Method to check if a number is an Armstrong number
    private static boolean isArmstrong(int number) {
        int digits = Integer.toString(number).length(); // Calculate number of digits
        int sum = armstrongSum(number, digits); // Calculate sum of digits raised to the power
        return sum == number; // Check if it matches the original number
    }
    // Main Method
    public static void main(String[] args) {
        // Let's Start here
        java.util.Scanner s1 = new java.util.Scanner(System.in);
        // Input from the user
        System.out.print("Enter a number to check if it is an Armstrong number: ");
        int number = s1.nextInt();

        // Check and display result
        if (isArmstrong(number)) {
            System.out.println(number + " is an Armstrong number.");
        } else {
            System.out.println(number + " is not an Armstrong number.");
        }

        s1.close();
    }
}
