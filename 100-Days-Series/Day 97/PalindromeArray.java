
public class PalindromeArray {
    public static boolean getReverseArray(int arr[]){
        int start=0;
        int end=arr.length-1;
        while(start<end){
            if(arr[start]!=arr[end]){
                return false;
            }
            start++;
            end--;
        }
        return true;
    }
    // Main Method
    public static void main(String [] args){
        int arr[]={1,2,3,2,1};
        System.out.print("Array : ");
        for(int i=0;i<arr.length;i++){
            System.out.print(arr[i]+" ");
        }
        boolean result=getReverseArray(arr);
        if(result){
            System.out.println("\nThe array is a palindrome.\n");
        }else{
            System.out.println("\nThe array is not a palindrome.\n");
        }
    }
}
