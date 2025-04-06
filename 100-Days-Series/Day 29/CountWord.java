class CountWord{
    // Main Metod 
    public static void main(String [] args){
        // Let's Start here
        String sentence;
        java.util.Scanner sc=new java.util.Scanner(System.in);

        System.out.print("Enter a sentence : ");
        sentence=sc.nextLine();

        if(sentence.trim().isEmpty()){
            System.out.println("The number of words in the sentence is : 0");
        }else{
            String arr[]=sentence.trim().split("\\s+");
            System.out.println("The number of words in the sentence is : "+arr.length);
        }
    }
}