public class TargetMatrix {
    // Method to search for a target in the matrix.
    public static boolean getFindTarget(int matrix[][],int target){
        int rows=matrix.length;
        int cols=matrix[0].length;
        int left=0,right=rows*cols-1;
        while(left<=right){
            int mid=left+(right-left)/2;
            int midValue=matrix[mid/cols][mid%rows];
            if(midValue==target){
                return true;
            }else if(midValue<target){
                left=mid+1;
            }else{
                right=mid+1;
            }
        }
        return false;
    }
    // Main Method 
    public static void main(String [] args){
        // Let's Start Here
        int [][]matrix={
            {1,2,3},
            {4,5,6},
            {7,8,9}
        };
        int target=5;
        boolean res=getFindTarget(matrix, target);
        if(res){
            System.out.println("Target "+target+" exists in the matrix.");
        }else{
            System.out.println("Target "+target+" does not exist in the matrix.");
        }
    }
}
