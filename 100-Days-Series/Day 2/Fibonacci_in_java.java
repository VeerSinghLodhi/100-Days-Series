
public class Fibonacci_in_java {
    public static void main(String[] args) {
        int num=10,nextTerm;
        int firstTerm=0;
        int secondTerm=1;
        // System.out.print("Enter Term of Series : ");
        // java.util.Scanner s1=new java.util.Scanner(System.in);
        // num=s1.nextInt();
        System.out.print(" "+firstTerm+" "+secondTerm);
        for(int i=0;i<num;i++)
        {
            nextTerm=firstTerm+secondTerm;
            System.out.print(" "+nextTerm);
            firstTerm=secondTerm;
            secondTerm=nextTerm;
        }
    }
}
