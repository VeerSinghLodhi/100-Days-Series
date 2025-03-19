class Swap2Numbers_in_java{
    // Main Method
    public static void main(String [] args){
        // Let's Start here
        //java.util.Scanner s1=new java.util.Scanner(System.in);
        int a,b;
        // Input two numbers
        //System.out.print("Enter 1 number : ");
        //a=s1.nextInt();
        //System.out.print("Enter 2 number : ");
        //b=s1.nextInt();
        a=10;
        b=20;
        System.out.println("Before Swapping...");
        System.out.println("A is "+a+"\nB is "+b);
        a=a+b;
        b=a-b; // Swapping Logic
        a=a-b;
        // Final Result
        System.out.println("After Swapping...");
        System.out.println("A is "+a+"\nB is "+b);
    }
}