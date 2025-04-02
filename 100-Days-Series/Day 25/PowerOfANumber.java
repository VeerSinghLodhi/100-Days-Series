
class PowerOfANumber{
    // Normal Function to calculate power of a number.
    public static int getPowerOfANumber(int base,int exp){// num^exponent.
        if(exp==0)
            return 1;
        int res=1;
        while(exp!=0){
            res*=base;
            exp--;
        }
        return res;
    }
    // Recurion function to calculate power of a number.
    public static int getPower(int base,int exp){
        if(exp==0)
            return 1;
        return base*getPower(base, --exp);
    }
    // Main Method
    public static void main(String [] args){
        // Let's Start here
        java.util.Scanner sc=new java.util.Scanner(System.in);
        int num,power;
        System.out.print("Enter a number : ");
        num=sc.nextInt();
        System.out.println("Enter power : ");
        power=sc.nextInt();
        int res1=getPowerOfANumber(num, power);
        int res2=getPower(num, power);
        System.out.println("Normal function result is : "+res1);
        System.out.println("Recursion function result is : "+res2);
    }
}