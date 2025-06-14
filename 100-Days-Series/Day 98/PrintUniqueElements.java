class PrintUniqueElements {
    // Method to print Unique elements. 
    public static void getPrintUniqueElements(int arr[]){
        System.out.print("\nUnique elements : ");
        for(int i=0;i<arr.length;i++){
            boolean isUnique=true;
            for(int j=0;j<arr.length;j++){
                if(i!=j && arr[i]==arr[j]){
                    isUnique=false;
                    break;
                }
            }
            if(isUnique){
                System.out.print(arr[i]+" ");
            }   
        }
    }
    // Main Method
    public static void main(String [] args){
        // Let's Start Here
        int arr[]={4, 5, 6, 4, 7, 8, 6};
        System.out.print("Array : ");
        for(int i=0;i<arr.length;i++){
            System.out.print(arr[i]+" ");
        }
        getPrintUniqueElements(arr);
    }
    
}
