
public class EvenOddSum {
    // Method to calculate the sum of even numbers.
    public static int getSumOfEvenNumber(int numbers[]){
        int evenSum=0;
        for(int i=0;i<numbers.length;i++){
            if(numbers[i]%2==0){
                evenSum+=numbers[i];
            }
        }
        return evenSum;
    }
    // Method to calculate the sum of odd numbers.
    public static int getSumOfOddNumber(int numbers[]){
        int oddSum=0;
        for(int i=0;i<numbers.length;i++){
            if(numbers[i]%2!=0){
                oddSum+=numbers[i];
            }
        }
        return oddSum;
    }
    // Main Method 
    public static void main(String [] args){
        int n;
        java.util.Scanner sc=new java.util.Scanner(System.in);
        System.out.print("Enter the number of integers : ");
        n=sc.nextInt();
        int []numbers=new int[n];
        for(int i=0;i<n;i++){
            System.out.print("Enter "+(i+1)+" integer : ");
            numbers[i]=sc.nextInt();
        }
        int evenSum=getSumOfEvenNumber(numbers);
        int oddSum=getSumOfOddNumber(numbers);
        System.out.println("The Sum of Even integers is : "+evenSum);
        System.out.println("The Sum of Odd integers is : "+oddSum);
    }
}
