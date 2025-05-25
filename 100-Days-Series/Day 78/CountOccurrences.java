
public class CountOccurrences {
    // Method to count occurrence of a specific number  in a 2D array
    public static int getCountOccurrence(int arr[][],int numberToSearch){
        int rows=arr.length;
        int cols=arr[0].length;
        int count=0;
        for(int i=0;i<rows;i++){
            for(int j=0;j<cols;j++){
                if(arr[i][j]==numberToSearch){
                    count++;
                }
            }
        }
        return count;
    }
    // Main Method 
    public static void main(String [] args){
        int [][]arr={
            {4, 7, 8},
            {8, 8, 7},
            {1, 7, 9}
        };
        int numberToSearch;
        java.util.Scanner sc=new java.util.Scanner(System.in);
        System.out.print("Enter number to search occurrence in the 2D array : ");
        numberToSearch=sc.nextInt();
        int count=getCountOccurrence(arr, numberToSearch);
        System.out.println("The number "+numberToSearch+" apprears "+count+" Times in the array");
    }
}
