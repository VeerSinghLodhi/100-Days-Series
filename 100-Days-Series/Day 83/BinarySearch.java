public class BinarySearch {
    // Method for Binary Search
    public static int getBianrySearch(int arr[],int key){
        int left=0;
        int right=arr.length-1;
        while(left<=right){
            int mid=left+(right-left)/2;
            if(arr[mid]==key){   // Check if key is present at mid
                return mid;
            }else if(arr[mid]<key){  // If key greater, ignore left half
                left=mid+1;
            }else{
                right=mid-1;  // If key is smaller, ignore right half
            }
        }
        return -1;  // If we reach here, then element was not present
    }
    // Main Method 
    public static void main(String [] args){
        // Let's Start Here
        int arr[]={1,2,3,4,5,6,7,8,9,10};// Sorted Array
        int key=6; // Value to Search
        int res=getBianrySearch(arr, key);
        if(res!=-1){
            System.out.println("Found at "+res);
        }else{
            System.out.println("Not Found!!");
        }
    }
}
