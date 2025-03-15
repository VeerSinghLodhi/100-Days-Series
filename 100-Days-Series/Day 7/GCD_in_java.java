// Greatest Common Divisor (GCD)
class GCD_in_java{
    // Function to calculate GCD using the Euclidean algorithm
    public static int getGCD(int num1,int num2){
        while(num2!=0){
            int remainder=num1%num2;
            num1=num2;
            num2=remainder;
        }
        return num1;
    }
    //Let's Start here
    public static void main(String args[]){
        int num1,num2;
        // java.util.Scanner s1=new java.util.Scanner(System.in);
        // System.out.print("Enter two Integers : ");
        num1=98;//s1.nextInt();
        num2=56;//s1.nextInt();
        //Ensure the numbers are positive 
        if(num1<0)
            num1=-num1;
        if(num2<0)
            num2=-num2;
        int gcd=getGCD(num1, num2);
        System.out.println("GCD of "+num1+" and "+num2+" is : "+gcd);
    }
}