// Count Digits in a Number
public class CountDigit_in_java {
    // Function for count digits
    public static int getCountDigits(int num){
        int count=0;
        // Handle negative numbers
        if(num<0)
            num=-num;
        // Count Digits
        while(num!=0){
            count++;
            num/=10;
        }
        return count;
    }
    // Let's Start here
    public static void main(String [] args){
        // java.util.Scanner s1=new java.util.Scanner(System.in);
        // Input a number
        System.out.print("Enter an Integer : ");
        int num=12345;//s1.nextInt();
        // Call the Function and display the result
        int digits=getCountDigits(num);
        System.out.println("The number of digits in "+num+" is : "+digits);
    }
}
