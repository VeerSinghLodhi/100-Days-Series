class Count_Vowels_And_Consonants{

    // Function for count Vowels
    public static int getCountVowels(String str){
        int countVowels=0;
        int len=str.length();
        for(int i=0;i<len;i++){
            char ch=str.charAt(i);
            if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' ||ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U'){
                countVowels++;
            }
        }
        return countVowels;
    }
    // Function for count Consonants
    public static int getCountConsnants(String str){
        int countConsonants=0;
        int len=str.length();
        for(int i=0;i<len;i++){
            char ch=str.charAt(i);
            if(!(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' ||ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U')){
                countConsonants++;
            }
        }
        return countConsonants;
    }
    // Main Method
    public static void main(String[] args) {
        java.util.Scanner s1=new java.util.Scanner(System.in);
        String str;
        System.err.print("Enter a String : ");
        str=s1.nextLine();
        int totalVowels,totalConsonants;
        totalVowels=getCountVowels(str);
        totalConsonants=getCountConsnants(str);
        System.err.println(str+", In this String....");
        System.err.println("Total Vowels are : "+totalVowels);
        System.err.println("Total Consonants are : "+totalConsonants);
    }
}