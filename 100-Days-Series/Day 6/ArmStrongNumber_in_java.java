class ArmStrongNumber_in_java{
    public static int getCountDigit(int num){
        int count=0;
        while(num!=0){
            count++;
            num/=10;
        }
        return count;
    }
    public static int getPower(int num,int power){
        int res=1;
        while(power>0){
            res*=num;
            power--;
        }
        return res;
    }
    public static boolean getIsArmStrongNumber(int num){
        int temp=num,sum=0,power=getCountDigit(num);
        while(num!=0){
            sum+=getPower(num, power);
            num/=10;
        }
        return temp==sum;
    }
    public static void main(String [] args){
        // java.util.Scanner s1=new java.util.Scanner(System.in);
        System.out.print("Enter a number :");
        int num=9;//s1.nextInt();
        boolean ans=getIsArmStrongNumber(num);
        if(ans)
            System.out.println(num+" is a Arm Strong Number");
        else
            System.out.println(num+" is not a Arm Strong Number");
    }
}
