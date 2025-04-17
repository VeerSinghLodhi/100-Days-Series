class MatrixAddition{
    // Main Method
    public static void main(String [] args){
        // Let's Start here
        int [][] arr1={
            {1,2,3},
            {4,5,6},
            {7,8,9}
        };
        int [][] arr2={
            {10,20,30},
            {40,50,60},
            {70,80,90}
        };
        if(arr1.length!=arr2.length && arr1[0].length!=arr2[0].length){
            System.out.println("Matrices must have the same dimensions for addition.");
            return;
        }
        int [][]result=new int[arr1.length][arr1[0].length];
        for(int i=0;i<arr1.length;i++){
            for(int j=0;j<arr1[0].length;j++){
                result[i][j]=arr1[i][j]+arr2[i][j];
            }
        }
        System.out.println("Resultant Matrix:");
    for (int i = 0; i < arr1.length; i++) {
        for (int j = 0; j < arr1[0].length; j++) {
            System.out.print(result[i][j]+" ");
        }
        System.out.println();
    }
    }
}