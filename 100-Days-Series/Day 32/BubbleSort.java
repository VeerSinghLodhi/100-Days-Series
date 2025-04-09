class BubbleSort{
    // Function for Bubble Sort
    public static int []getBubbltSort(int arr[]){
        int length=arr.length;
        for(int i=0;i<length-1;i++){
            for(int j=0;j<length-1-i;j++){
                if(arr[j]>arr[j+1]){
                    arr[j]=arr[j]+arr[j+1];
                    arr[j+1]=arr[j]-arr[j+1];
                    arr[j]=arr[j]-arr[j+1];
                }
            }
        }
        return arr;
    }
    public static void getPrintArray(int arr[]){
        for(int i=0;i<arr.length;i++){
            System.out.print(arr[i]+" ");
        }
    }
    // Main Method
    public static void main(String [] args){
        // Let's Start here
        int arr[]={4,3,5,2,6,7,8,1};
        System.out.println("\nBefore Sorting..");
        getPrintArray(arr);
        System.out.println("\nAfter Bubble Sorting..");
        getPrintArray(getBubbltSort(arr));
    }
}