public class RotateMatrix90d {
    // Function to rotate a matrix by 90 degrees clockwise
    public static void getRotate(int matrix[][]){
        int n=matrix.length;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                int temp=matrix[i][j];
                matrix[i][j]=matrix[j][i];
                matrix[j][i]=temp;
            }
        }
        for(int i=0;i<n;i++){
            int left=0,right=n-1;
            while(left<right){
                int temp=matrix[i][left];
                matrix[i][left]=matrix[i][right];
                matrix[i][right]=temp;
                left++;
                right--;
            }
        }
    }
    // Function to print matrix
    public static void getPrintMatrix(int matrix[][]){
        for(int i=0;i<matrix.length;i++){
            for(int j=0;j<matrix.length;j++){
                System.out.print(matrix[i][j]+" ");
            }
            System.out.println();
        }
    }
    // Main Method
    public static void main(String [] args){
        // Let's Start here
        int [][] matrix={
            {1,2,3},
            {4,5,6},
            {7,8,9}
        };
        System.out.println("Original Matrix : ");
        getPrintMatrix(matrix);
        System.out.println("Rotated Matrix : ");
        getRotate(matrix);
        getPrintMatrix(matrix);
    }
}
