class MultiplicationTable{
    // Method to print multiplication table for a given number
    public static void getPrintTable(int number){
        System.out.println("Multiplication table for "+number+" :");
        for(int i=1;i<=10;i++){
            //Correcting the multiplication logic in the loop
            System.out.println(number+" x "+i+" = "+(number*i));
        }
    }
    // Main Method
    public static void main(String [] args){
        // Let's Start Here
        int number;
        java.util.Scanner sc=new java.util.Scanner(System.in);
        // Prompt the user to enter a number
        System.out.print("Enter a number to print its multiplication table : ");
        number=sc.nextInt();
        // call the function to print the multiplication table
        getPrintTable(number);
    }
}