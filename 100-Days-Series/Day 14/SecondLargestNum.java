class SecondLargestNum{
    // Function for fine the seocnd largest number.
    public static int getSecondLargestNumber(int arr[]){
        // Bubble Sort
        for(int i=0;i<arr.length-1;i++){
            for(int j=0;j<arr.length-i-1;j++){
                if(arr[j]>arr[i+1]){
                    arr[j]=arr[j]+arr[i+1];
                    arr[i+1]=arr[j]-arr[i+1];
                    arr[j]=arr[j]-arr[i+1];
                }
            }
        }
        return arr[arr.length-1];
    }
// Main Method
    public static void main(String []args){
        java.util.Scanner s1=new java.util.Scanner(System.in);
        // Input the size of the array 
        System.out.print("Enter the number of elements in the array: ");
        int n=s1.nextInt();
        int arr[]=new int[n];
        // Input array elements
        System.out.print("Enter the elements of the array:\n");
        for(int i=0;i<n;i++){
            arr[i]=s1.nextInt();
        }
        // Print array element
        for(int i=0;i<arr.length;i++){
            System.out.print(" "+arr[i]);
        }
        int SecondLagestNumber=getSecondLargestNumber(arr);
        System.out.println("\nThe Seocnd Largest number is "+SecondLagestNumber);
    }
}