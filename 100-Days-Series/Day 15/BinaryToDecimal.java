class BinaryToDecimal{
    // Fucntion for Binary to Decimal Conversion
    public static int getBinaryToDecimal(long binary){
        int decimal=0,base=1;
        while(binary!=0){
            long remainder=binary%10;  // Extract the last digit
            decimal+=remainder*base;    // Multiply with the currnt base
            base*=2;                    //Update the base (2^i)
            binary/=10;                 // Remove the last digit
        }
        return decimal;
    }
    public static void main(String [] args){
        long binary;
        java.util.Scanner s1=new java.util.Scanner(System.in);
        System.out.print("Enter Binary Number : ");
        binary=s1.nextLong();
        int decimal=getBinaryToDecimal(binary);
        System.out.println("The Decimal Equivalent is : "+decimal);
    }
}