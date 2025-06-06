public class MergeSort {
    // Method to merge two sorted halves of the array
    public static void merge(int arr[],int s,int e){
        int mid=(s+e)/2;
        int j=mid+1;
        int i=s,k=s;
        int []temp=new int[s+e+1];
        while(i<=mid && j<=e){
            if(arr[i]<arr[j])
                temp[k++]=arr[i++];
            else
                temp[k++]=arr[j++];
        }
        while (i <= mid) {
            temp[k++] = arr[i++];
        }
        while (j <= e) {
            temp[k++] = arr[j++];
        }
        for (i = s; i <= e; i++) {
            arr[i] = temp[i];
        }
    }
    // Recursive function to perform Merge Sort
    public static void getMergeSort(int arr[],int s,int e){
        if(s>=e)
            return ;
        int mid=(s+e)/2;
        getMergeSort(arr, s, mid);
        getMergeSort(arr, mid+1, e);
        merge(arr, s, e);
    }
    // Function to print an array
    public static void getPrintArray(int arr[]){
        for(int i=0;i<arr.length;i++){
            System.out.print(arr[i]+"  ");
        }
        System.out.println();
    }
    // Main Method 
    public static void main(String [] args){
        // Let's Start Here
        int arr[]={5,4,6,3,7,8};
        System.out.println("Before Sorting..");
        getPrintArray(arr);
        getMergeSort(arr, 0, arr.length-1);
        System.out.println("After Sorting..");
        getPrintArray(arr);
    }
}
