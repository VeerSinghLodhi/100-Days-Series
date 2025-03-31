class MergeTwoArrays{
    // Function for merge two sorted arrays
    public static int []getMergeTwoArrays(int arr1[],int arr2[]){
        int i=0,j=0,k=0;
        int size1=arr1.length;
        int size2=arr2.length;
        int mergedArray[]=new int[size1+size2];
        // traverse both arrays
        while(i<size1 && j<size2){
            if(arr1[i]<=arr2[j]){
                mergedArray[k++]=arr1[i++];
            }else{
                mergedArray[k++]=arr2[j++];
            }
        }
        // Stort Remaining element of arr1
        while(i<size1){
            mergedArray[k++]=arr1[i++];
        }
        // Stort Remaining element of arr2
        while(j<size2){
            mergedArray[k++]=arr2[j++];
        }
        return mergedArray;
    }
    // Main Method
    public static void main(String[] args){
        // Let's Start here
        int arr1[]={1,3,5,7,9};
        int arr2[]={2,4,6,8,10};
        int mergedArray[]=getMergeTwoArrays(arr1, arr2);
        // print the merged array
        for(int num:mergedArray){
            System.out.print(" "+num);
        }
    }
}