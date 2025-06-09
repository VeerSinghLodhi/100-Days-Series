public class FindElementInRange {
    // Method to find number in a particular range.
    public static int getFindNumberInRange(int arr[],int sr,int er,int number){
        if(sr<0 || er>=arr.length || sr>er){
            return -1;
        }
        for(int i=sr;i<=er;i++){
            if(arr[i]==number){
                return i;
            }
        }
        return -1;
    }
    // Main Method
    public static void main(String [] args){
        int arr[]={1,2,3,4,5,6,7,8,9,10};
        int sr=2;
        int er=5;
        int numberToFind=3;
        int res=getFindNumberInRange(arr, sr, er, numberToFind);
        if(res!=-1){
            System.out.println("Found at Index "+res);
        }else{
            System.out.println("Not Found!!");
        }
    }
}
