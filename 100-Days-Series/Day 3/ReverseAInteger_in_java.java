
public class ReverseAInteger_in_java {
    public static int getReverseInteger(int num){
        int reversed=0;
        while(num!=0){
            reversed=(reversed*10)+num%10;
            num/=10;
        }
        return reversed;
    }
    public static void main(String [] args){
        // java.util.Scanner s=new java.util.Scanner(System.in);
        int num=12345;
        // System.out.print("Enter a number :");
        // num=s.nextInt();
        num=getReverseInteger(num);
        System.out.println("Reversed Integer is "+num);
    }
}
