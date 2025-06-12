
class SumOfNegativeNumbers{
    // Method to find the sum of negative numbers in the array.
    public static int getSumOfNegativeNumbers(int arr[]){
        int sum=0;
        for(int i=0;i<arr.length;i++){
            if(arr[i]<0){
                sum+=arr[i];
            }
        }
        return sum;
    }
    // Main Method 
    public static void main(String [] args){
        // Let's Start Here
        int arr[]={5,4,-1,3,-7,-6};
        int result=getSumOfNegativeNumbers(arr);
        System.out.println("Sum of Negative Numbers : "+result);
    }
}