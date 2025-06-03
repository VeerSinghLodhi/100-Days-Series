public class PerfectNumber {
    // Method to print perfect number Square between 1 to N
    public static void getPrintPerfectSquareNumber(int n){
        for(int i=1;i*i<=n;i++){
            System.out.print((i*i)+" ");
        }
    }
    // Main Method
    public static void main(String [] args){
        // Let's Start Here
        java.util.Scanner sc=new java.util.Scanner(System.in);
        System.out.print("Enter the value of N : ");
        int  n=sc.nextInt();
        System.out.println("Perfect Square Number between 1 and "+n+"+ :\n");
        getPrintPerfectSquareNumber(n);
    }
}
