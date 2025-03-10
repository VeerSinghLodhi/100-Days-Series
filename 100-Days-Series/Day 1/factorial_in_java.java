class factorial_in_java{
    public static int getFactorial(int num){
        if (num < 0)
            return -1;
        if (num == 0)
            return 1;
        else{
            int fact = 1;
            for (int i = 1; i <= num; i++)
            {
                fact = fact * i;
            }
            return fact;
        }
    }
    public static void main(String [] args){
        int num=6;
        // java.util.Scanner s1=new java.util.Scanner(System.in);
        // System.out.print("Enter a number : ");
        // num=s1.nextInt();
        num=getFactorial(num);
        if(num==-1)
            System.out.println("Factorial of a negative number is not defined.");
        else{
            System.out.println("Factorial is "+num);
        }
        
    }
}