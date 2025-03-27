class RemoveDuplicatesElements{
     public static int size; // Global static variable
    // Function for Remove Duplicates Elements of an array
    public static int []getRemoveDupliaceteElements(int arr[]){
         size=arr.length;
        int temp[]=new int[size];
        int i,j,index=0;
        for(i=0;i<size;i++){
            for(j=0;j<index;j++){
                if(arr[i]==arr[j])
                    break;
            }
            if(j==index){
                temp[index++]=arr[i];
            }
        }
        size=index;
        return temp;
    }
    // Main Method
    public static void main(String [] args){
        // Let's Start here
        int i;
        java.util.Scanner s1=new java.util.Scanner(System.in);
        System.out.print("Enter the number of elements in the array : ");
        size=s1.nextInt();
        int arr[]=new int[size];
        System.out.println("Enter the elements of the array : ");
        for(i=0;i<size;i++){
            arr[i]=s1.nextInt();
        }
        int carr[]=getRemoveDupliaceteElements(arr);
        System.out.println("Array after removing duplicates elements :" );
        for(i=0;i<size;i++){
            System.out.print(" "+carr[i]);
        }
    }
}