class ToggleCase{
    // Method for ToggleCase
    public static String getToggleCase(String str){
        StringBuilder result=new StringBuilder();
        for(char ch:str.toCharArray()){
            if(Character.isLowerCase(ch)){
                result.append(Character.toUpperCase(ch));
            }else if(Character.isUpperCase(ch)){
                result.append(Character.toLowerCase(ch));
            }else{
                result.append(ch);
            }
        }
        return result.toString();
    }
    // Main Method
    public static void main(String [] args){
        // Let's Start here
        String str;
        java.util.Scanner sc=new java.util.Scanner(System.in);
        System.out.print("Enter a string : ");
        str=sc.nextLine();
        String toggledString=getToggleCase(str);
        System.out.println("Original String : "+str);
        System.out.println("Toggled String : "+toggledString);
    }
}