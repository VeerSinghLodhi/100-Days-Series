
public class PrimeNumber_in_java {
    public static boolean getCheckPrimeNumber(int num){
        boolean ans=true;
        if(num==1 || num==0)
            ans=false;
        else{
            for(int i=2;i<num;i++){
                if(num%i==0){
                    ans=false;
                    break;
                }
            }
        }
        return ans;
    }
    public static void main(String args[]){
        int num=11;
        // java.util.Scanner s1=new java.util.Scanner(System.in);
        // System.out.print("Enter a number : ");
        // num=s1.nextInt();
        boolean ans=getCheckPrimeNumber(num);
        if(ans)
            System.out.println(num+" is a Prime Number");
        else
            System.out.println(num+" is not a Prime Number");
    }
}
