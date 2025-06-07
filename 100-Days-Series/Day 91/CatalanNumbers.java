class CatalanNumbers{
    // Method to calculate factorial
    public static int getFactorial(int n){
        if(n==0 || n==1)
            return 1;
        return n*getFactorial(n-1);
    }
    // Method to calculate the nth Catalan number
    public static int getCatalan(int n){
        return getFactorial(2*n)/(getFactorial(n+1)*getFactorial(n));
    }
    // Main Method
    public static void main(String [] args){
        // Let's Start Here
        int n;
        java.util.Scanner sc=new java.util.Scanner(System.in);
        System.out.print("Enter the number of terms (N) : ");
        n=sc.nextInt();
        System.out.println("Catalan Numbers up to "+n+" terms : ");
        for(int i=0;i<n;i++){
            System.out.print(getCatalan(i)+" ");
        }
    }
}