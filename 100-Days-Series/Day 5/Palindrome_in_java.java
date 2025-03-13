public class Palindrome_in_java {
    public static boolean getCheckPalindromeNumber(int num){
        int n=num,reversed=0;
        while(num!=0){
            reversed=(reversed*10)+num%10;
            num/=10;
        }
        return n==reversed;
    }    
    public static void main(String[] args) {
        // Scanner sc=new Scanner(System.in);
        int num=12321;
        System.out.print("Enter a number : ");
        // num=sc.nextInt();
        boolean ans = getCheckPalindromeNumber(num);
        if(ans)
            System.out.println(num+" is a Palindrome Number");
        else
            System.out.println(num+" is not a Palindrome Number");
    }
}
