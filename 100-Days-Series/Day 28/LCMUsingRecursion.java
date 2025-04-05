class LCMUsingRecursion{
    public static int getGCD(int num1,int num2){// Recursion method to  find GCD
        if(num2==0){
            return num1;
        }
        return getGCD(num2, num1%num2);
    }
    public static int getLCM(int num1,int num2){// Method to find LCM using recursion gcd
        return (num1*num2)/getGCD(num1, num2);
    }
    // Main Method
    public static void main(String [] args){ 
        // Let's Start here
        int num1,num2;
        java.util.Scanner sc=new java.util.Scanner(System.in);
        System.out.print("Enter 1 number : ");
        num1=sc.nextInt();
        System.out.print("Enter 2 number : ");
        num2=sc.nextInt();
        int lcm=getLCM(num1, num2);
        System.out.println("LCM of "+num1+" and "+num2+" is : "+lcm);
    }
}