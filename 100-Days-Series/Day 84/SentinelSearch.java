public class SentinelSearch {
    // Funtion for Sentinel Search Algorithm
    public static int getSentinelSearch(int arr[],int key){
        int size=arr.length;
        int last=arr[size-1];
        arr[size-1]=key;
        int i=0;
        while(arr[i]!=key){
            ++i;
        }
        arr[size-1]=last;
        if((i<size-1) || (arr[size-1]==key))
            return i;
        else 
            return -1;
    }
    // Main Method 
    public static void main(String [] args){
        int []arr={10,20,30,40,50,60};
        int key=60;
        int res=getSentinelSearch(arr,key);
        if(res!=-1){
            System.out.println("Fount at "+res);
        }else{
            System.out.println("Not Found!!");
        }
    }
}
