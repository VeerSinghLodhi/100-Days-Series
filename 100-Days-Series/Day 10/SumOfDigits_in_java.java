class SumOfDigits_in_java{
    // Function for calculate the Sum of Digits
    public static int getSumOfDigits(int num){
        int sum=0;
        while(num!=0){
            sum+=num%10;
            num/=10;
        }
        return sum;
    } 
    // Let's Start here
    public static void main(String [] args){
        // java.util.Scanner s1=new java.util.Scanner(System.in);
        // Input the number
        System.out.print("Enter an Integer : ");
        int num=123456;//s1.nextInt();
        // Call the function and display the result
        int totalSum=getSumOfDigits(num);
        System.out.println("Sum of Digits is : "+totalSum);
    }
}