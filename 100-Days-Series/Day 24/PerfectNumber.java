public class PerfectNumber {
    // Function for check number is perfect or not.
    public static boolean isPerfect(int num) {
        if (num <= 1) return false;

        int sum = 0;
        for (int i = 1; i <= num / 2; i++) {
            if (num % i == 0) {
                sum += i;
            }
        }
        return sum == num;
    }
    //Main Method
    public static void main(String[] args) {
        // Let's Start here
        java.util.Scanner sc = new java.util.Scanner(System.in);
        System.out.print("Enter a number: ");
        int number = sc.nextInt();
        sc.close();
        // Call the function and display result.
        if (isPerfect(number)) {
            System.out.println(number + " is a Perfect Number.");
        } else {
            System.out.println(number + " is NOT a Perfect Number.");
        }
    }
}
