public class PalindromeString {
    // function to check if string is a plindrome string or not
    public static boolean getCheckPalindrome(String str){
        String temp="";
        for(int i=str.length()-1;i>=0;--i){
            char ch=str.charAt(i);
            temp+=ch;
        }
        return temp.equals(str);
    }
    // Main Method 
    public static void main(String [] args){
        // Let's Start here
        java.util.Scanner sc=new java.util.Scanner(System.in);
        System.out.print("Enter a String : ");
        String str=sc.nextLine();
        if(getCheckPalindrome(str))
            System.out.println("String is a Palindrome");
        else
            System.out.println("String is not a Palindrome");
    }
}
