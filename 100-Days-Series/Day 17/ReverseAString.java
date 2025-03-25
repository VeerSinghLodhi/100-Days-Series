class ReverseAString{
    // Function to reverse a string.
    public static String getReverseString(String str){
        String reversed="";
        for(int i=str.length()-1;i>=0;i--){
            reversed+=str.charAt(i);
        }
        return reversed;
    }
    // Main Method
    public static void main(String[] args) {
        // Let's Start here
        java.util.Scanner scanner=new java.util.Scanner(System.in);
        System.out.print("Enter a String : ");
        String str=scanner.nextLine();
        System.out.println("Original String :"+str);
        // Call the function
        String reversed=getReverseString(str);
        System.out.println("Reversed String : "+reversed);
    }
}