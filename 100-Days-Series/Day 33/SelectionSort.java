public class SelectionSort {
    // Function For Selection Sort
    public static void getSelectionSort(int arr[]){
        int len=arr.length;
        for(int i=0;i<len-1;i++){
            int minIndex=i;
            for(int j=i+1;j<len;j++){
                if(arr[j]<arr[minIndex])
                    minIndex=j;
            }
            int temp=arr[minIndex];
            arr[minIndex]=arr[i];
            arr[i]=temp;
        }
    }
    public static void getPrintArray(int arr[]){
        for(int i=0;i<arr.length;i++){
            System.out.print(arr[i]+" ");
        }
    }
    // Main Method
    public static void main(String [] args){
        // Let's Start here
        int arr[]={4,6,5,3,2,1,7,8,9};
        System.out.println("Before Sorting..");
        getPrintArray(arr);
        System.out.println("\nAfter Selection Sorting..\n");
        getSelectionSort(arr);
        getPrintArray(arr);
    }
}

