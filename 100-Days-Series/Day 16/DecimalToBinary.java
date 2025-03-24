public class DecimalToBinary {
    // Function for Decimal to Binary conversion
    public static long getDecimalToBinary(int decimal){
        int place=1;
        long binary=0;
        while(decimal!=0){
            int remainder=decimal%2;  //Get the last binary digit          
            binary+=remainder*place;  //  Add it to the binary result
            decimal/=2;         // Divide the number by 2
            place*=10;      //Move to the next place value
        }
        return binary;              
    }
    // Main Method
    public static void main(String [] args){
        java.util.Scanner s1=new java.util.Scanner(System.in);
        System.out.print("Enter Decimal Number : ");
        int decimal=s1.nextInt();
        long binary=getDecimalToBinary(decimal);
        System.out.println("Binary Equivalent is : "+binary);
    }
}
