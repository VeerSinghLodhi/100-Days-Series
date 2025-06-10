public class ReplaceNegativeNumberWithZero {
    // Method to replace negative numbers with zero.
    public static void getReplaceNegativeNumberWithZero(int arr[]){
        for(int i=0;i<arr.length;i++){
            if(arr[i]<0){
                arr[i]=0;
            }
        }
    }
    // Method to print an array
    public static void getPrintArray(int arr[]){
        for(int i=0;i<arr.length;i++){
            System.out.print(arr[i]+" ");
        }
        System.out.println();
    }
    // Main Method 
    public static void main(String [] args){
        int arr[]={-1, 2, -3, 4, -5};
        System.out.println("Original Array");
        getPrintArray(arr);
        getReplaceNegativeNumberWithZero(arr);
        System.out.println("Updated Array");
        getPrintArray(arr);
    }

}
