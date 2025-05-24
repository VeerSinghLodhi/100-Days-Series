public class ContainsDuplicate {
    // Method to check if the array has duplicate values
    public static boolean getCheck(int arr[]){
        // Bubble Sort
        for(int i=0;i<arr.length;i++){
            for(int j=0;j<arr.length-i-1;j++){
                if(arr[j]>arr[j+1]){
                    int temp=arr[j];
                    arr[j]=arr[j+1];
                    arr[j+1]=temp;
                }
            }
        }
        // Check for duplicates in the sorted array
        for(int i=0;i<arr.length-1;i++){
            if(arr[i]==arr[i+1]){
                return true;
            }
        }
        return false;
    }
    // Main Method 
    public static void main(String [] args){
        // Let's Start Here
        int arr1[]={1, 2, 3, 1};
        int arr2[]={1, 2, 3, 4};
        int arr3[]={1, 1, 1, 3, 3, 4, 2, 4, 2};
        boolean result1=getCheck(arr1);
        boolean result2=getCheck(arr2);
        boolean result3=getCheck(arr3);
        System.out.println("Result 1 : "+result1);
        System.out.println("Result 1 : "+result2);
        System.out.println("Result 1 : "+result3);

    }
}
