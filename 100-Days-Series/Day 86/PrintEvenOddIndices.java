class PrintEvenOddIndices{
    // Method to print Even Indices 
    public static void getPrintEvenIndices(int arr[]){
        for(int i=0;i<arr.length;i++){
            if(i%2==0){
                System.out.print(arr[i]+" ");
            }
        }
    }
    // Method to print Odd Indices 
    public static void getPrintOddIndices(int arr[]){
        for(int i=0;i<arr.length;i++){
            if(i%2!=0){
                System.out.print(arr[i]+" ");
            }
        }
    }
    // Main Method 
    public static void main(String [] args){
        // Let's Start Here
        int arr[]={1,2,3,4,5,6,7,8,9,10};
        System.out.println("Even Indices Printing..");
        getPrintEvenIndices(arr);
        System.out.println("\nOdd Indices Printing..");
        getPrintOddIndices(arr);
    }
}