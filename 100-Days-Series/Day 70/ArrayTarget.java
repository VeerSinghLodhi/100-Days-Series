public class ArrayTarget {
    // Funtion to find two numbers that add up to a specific target
    public static void getFind(int arr[],int target){
        for(int i=0;i<arr.length;i++){
            for(int j=i+1;j<arr.length;j++){
                if(arr[i]+arr[j]==target){
                    System.out.println("Indices : "+i+", "+j);
                    return;
                }
            }
        }
        System.out.println("No Solution Found");
    }
    // Main Method
    public static void main(String [] args){
        int []arr={2,5,6,8,10,23};
        int target=11;
        getFind(arr, target);
    }

}
