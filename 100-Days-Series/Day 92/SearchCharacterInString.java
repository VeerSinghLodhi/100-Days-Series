public class SearchCharacterInString {
    // Method to find Character in  String 
    public static int getFindCharacter(String str,char ch){
        for(int i=0;i<str.length();i++){
            if(str.charAt(i)==ch){
                return i;
            }
        }
        return -1;
    }
    // Main Method 
    public static void main(String [] args){
        // Let's Start Here
        String str;
        java.util.Scanner sc=new java.util.Scanner(System.in);
        System.out.print("Enter a String : ");
        str=sc.nextLine();
        System.out.print("Enter Character to find : ");
        char ch=sc.nextLine().charAt(0);
        int res=getFindCharacter(str, ch);
        if(res!=-1){
            System.out.println("Found at "+res);
        }else{
            System.out.println("Not Found!!");
        }
    }
}
