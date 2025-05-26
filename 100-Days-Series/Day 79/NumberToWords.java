class NumberToWords{
    // Array to map digits to their English words
    public static final String[] words={
        "zero","one","two","three","four","five","six","seven","eight","nine"
    };
    // Recursive Method to convert number to words.
    public static String getConvertNumberToWords(int number){
        // Base Case: if the number is 0, stop recursion.
        if(number==0){
            return "";
        }
        // Recursive call
        String result=getConvertNumberToWords(number/10);
        result+=words[number%10]+" ";
        return result;
    }
    // Main Method
    public static void main(String [] args){
        // Let's Start Here
        java.util.Scanner sc=new java.util.Scanner(System.in);
        System.out.print("Enter a number : ");
        int number=sc.nextInt();
        if(number==0){
            System.out.println("Zero");
        }else{
           String result= getConvertNumberToWords(number);
           System.out.println(result);
        }
    }
}