class SumOfPositiveNumbers{
    // Method to find the sum of positive numbers in the array.
    public static int getSumOfPositiveNumbers(int arr[]){
        int sum=0;
        for(int i=0;i<arr.length;i++){
            if(arr[i]>0){
                sum+=arr[i];
            }
        }
        return sum;
    }
    // Main Method
    public static void main(String [] args){
        // Let's Start Here
        int arr[]={-2, 3, 4, -1, 5};
        int result=getSumOfPositiveNumbers(arr);
        System.out.println("\nSum of Positive Numbers : "+result);
    }
}