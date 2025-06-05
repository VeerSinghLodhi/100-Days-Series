public class CountEvenOdd {
    // Method for count Even & Odd
    public static void getCountEvenOdd(int arr[]){
        int countEven=0;
        int countOdd=0;
        for(int i=0;i<arr.length;i++){
            if(arr[i]%2==0){
                countEven++;
            }else{
                countOdd++;
            }
        }
        System.out.println("Even Numbers : "+countEven);
        System.out.println("Odd Numbers : "+countOdd);
    }
    // Main Method 
    public static void main(String [] args){
        // Let's Start Here
        int size;
        java.util.Scanner sc=new java.util.Scanner(System.in);
        System.out.print("Enter the size of the array : ");
        size=sc.nextInt();
        int []arr=new int[size];
        System.out.println("Enter the elements of the array :\n");
        for(int i=0;i<size;i++){
            System.out.print("Enter "+(i+1)+" element : ");
            arr[i]=sc.nextInt();
        }
        getCountEvenOdd(arr);
    }
}
