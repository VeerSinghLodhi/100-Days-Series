class QuickSort{
    // Method for Quick Sort
    public static void getQuickSort(int arr[],int low,int high){
        if(low<high){
            // Partition the array and get the pivot index
            int pivotIndex=partition(arr,low,high);
            // Recursively sort elements before and after the partition
            getQuickSort(arr, low, pivotIndex-1);
            getQuickSort(arr, pivotIndex+1, high);
        }
    }
    public static int partition(int arr[],int low,int high){

        int pivot=arr[high];
        int i=low-1;
        for (int j=low;j<high;j++){
            //  If the current element is less and equal to the pivot
            if(arr[j]<=pivot){
                i++;
                // Swap array[i] and array[j]
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
         // Swap array[i + 1] and array[high] (or pivot)
         int temp = arr[i + 1];
         arr[i + 1] = arr[high];
         arr[high] = temp;
         return i+1;// Return the pivot index
    }
    public static void getPrintArray(int arr[]){
        for(int i=0;i<arr.length;i++){
            System.out.print(arr[i]+" ");
        }
    }
    // Main Method
    public static void main(String [] args){
        // Let's Start here
        int arr[]={5,4,6,2,7,8,1};
        System.out.println("Before Sorting..");
        getPrintArray(arr);
        System.out.println("\nAfter Quick Sorting..");
        getQuickSort(arr, 0, arr.length-1);
        getPrintArray(arr);

    }
}