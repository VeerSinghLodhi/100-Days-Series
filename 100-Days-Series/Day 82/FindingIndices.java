public class FindingIndices {
    // Method to find all occurrences of a key in the array
    public static void getFindOccurrence(int arr[],int key,int index){
        int len=arr.length;
        // Base case: if the current index reaches the size of the array, stop recursion
        if(len==index){
            return;
        }
        // If the current element matches the key, print its index
        if(arr[index]==key){
            System.out.print(index+" ");
        }
        // Recursive call to check the next element
        getFindOccurrence(arr, key, ++index);
    }
    // Main Method
    public static void main(String [] args){
        // Let's Start Here
        int arr[]={3, 2, 4, 5, 6, 2, 7, 2, 2};
        int key=2;
        getFindOccurrence(arr, key, 0);
    }
}
