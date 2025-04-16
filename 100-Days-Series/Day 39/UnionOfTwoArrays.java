class UnionOfTwoArrays {
    // Function to find unique elements 
    public static void getUnion(int arr1[],int arr2[]){
        int uniArray[]=new int[arr1.length+arr2.length];
        int k=0;
        for(int i=0;i<arr1.length;i++){
            uniArray[k++]=arr1[i];
        }
        for(int i=0;i<arr2.length;i++){
            boolean isPresent=false;
            for(int j=0;j<k;j++){
                if(arr2[i]==uniArray[j]){
                    isPresent=true;
                    break;
                }
            }
            if(!isPresent){
                uniArray[k++]=arr2[i];
            }
        }
        System.out.println("Union of arrays: \n");
        for(int i=0;i<k;i++){
            System.out.print(uniArray[i]+" ");
        }
    }
    // Main Method
    public static void main(String [] args){
        // Let's Start here
        int arr1[]={1,2,3,4,5,6,7};
        int arr2[]={5,1,6,10,9};
        getUnion(arr1, arr2);
    }
}
