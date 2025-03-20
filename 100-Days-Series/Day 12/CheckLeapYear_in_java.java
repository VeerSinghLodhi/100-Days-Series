public class CheckLeapYear_in_java {
    // Function for check leap year
    public static boolean getCheckLeapYear(int year){
        // Check if the year is divisible by 4 but not by 100, 
        // Or if it is divisible by 400
        if((year%4==0 && year % 100 != 0) || year % 400 == 0)
            return true;
        else
            return false;
    }
    // Main Method
    public static void main(String [] args){
        // Let's Start here
        // Create a Scanner object for user input
        java.util.Scanner s1=new java.util.Scanner(System.in);
        int year;
        // Prompt the user to enter a year
        System.out.print("Enter a Year : ");
        year=s1.nextInt();
        // Call the function and display the result
        boolean res=getCheckLeapYear(year);
        if(res)
            System.out.println(year+" is a Leap Year!!");
        else
            System.out.println(year+" is not a Leap Year!!");
    }
}
