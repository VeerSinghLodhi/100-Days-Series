class PerfectCubeNumber {
    // Method to find Perfect Cube Number between 1 to N
    public static void getFindPerfectCubeNumber(int n){
        for(int i=1;i<=n;i++){
            int res=i*i*i;
            if(res>n){
                break;
            }
            System.out.print(res+" ");
        }
    }
    // Main Method
    public static void main(String [] args){
        // Let's Start Here
        int n;
        java.util.Scanner sc=new java.util.Scanner(System.in);
        System.out.print("Enter the value of N : ");
        n=sc.nextInt();
        System.out.println("Perfect Cube Number between 1 to N : ");
        getFindPerfectCubeNumber(n);
    }
}
