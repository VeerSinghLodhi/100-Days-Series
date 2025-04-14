public class RemoveSpace {
    // Function for remove spaces from a string
    public static String getRemoveSpaces(String str){
        String temp="";
        for(int i=0;i<str.length();i++){
            char ch=str.charAt(i);
            if(ch!=' ')
                temp+=ch;
        }
        return temp;
    }
    // Main Method
    public static void main(String [] args){
        // Let's Start here
        String str;
        System.out.print("Enter a String : ");
        java.util.Scanner sc=new java.util.Scanner(System.in);
        str=sc.nextLine();
        System.out.println("String with spaces : "+str);
        System.out.println("String withour spaces : "+getRemoveSpaces(str));
    }
}