
class HCFUsingRecursion {

    // Recursive function to find HCF
    static int findHCF(int a, int b) {
        if (b == 0)
            return a;
        return findHCF(b, a % b); // Recursion step
    }
    // Main Method
    public static void main(String[] args) {
        // Let's Start here
        int num1,num2;
        java.util.Scanner sc=new java.util.Scanner(System.in);
        System.out.print("Enter 1 number : ");
        num1=sc.nextInt();
        System.out.print("Enter 2 number : ");
        num2=sc.nextInt();
        int hcf = findHCF(num1, num2);
        System.out.println("HCF of " + num1 + " and " + num2 + " is: " + hcf);
    }
}
