class Pangram{
    // Function to check if sentence is a pangram
    public static boolean isPangram(String sentence){
        java.util.Set<Character> letters=new java.util.HashSet<>();
        for(int i=0;i<sentence.length();i++){
            char ch=sentence.charAt(i);
            ch=Character.toLowerCase(ch);
            if(ch>='a' && ch<='z'){
                letters.add(ch);
            }
        }
        return letters.size()==26;
    }
    // Main Method
    public static void main(String [] args){
        //Let's Start here
        String setence="The quick brown fox jumps over the lazy dog";
        if(isPangram(setence)){
            System.out.println("This sentence is a Pangram");
        }else{
            System.out.println("This sentence is not a Pangram");
        }
    }
}