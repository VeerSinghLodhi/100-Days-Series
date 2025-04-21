import java.util.ArrayList;
import java.util.List;
class SpiralMatrix{

    // Function to print a matrix in spiral order.
    public static List<Integer> getSpiralMatrix(int matrix[][]){
        List<Integer> result=new ArrayList<>();

        int top=0,bottom=matrix.length-1;
        int left=0,right=matrix[0].length-1;
        while(top<=bottom && left<=right){
            // traverse from left to right
            for(int col=left;col<=right;col++){
                result.add(matrix[top][col]);
            }
            top++;
            // traverse from top to bottom
            for(int row=top;row<=bottom;row++){
                result.add(matrix[row][right]);
            }
            right--;
            if(top<=bottom){
                // traverse from right to left
                for(int col=right;col>=left;col--){
                    result.add(matrix[bottom][col]);
                }
                bottom--;
            }
            if(left<=right){
                // traverse from bottom to top
                for(int row=bottom;row>=top;row--){
                    result.add(matrix[row][left]);
                }   
                left++;
            }
        }
        return result;
    }
    // Main Method
    public static void main(String [] args){
        // Let's Start here
        int matrix[][]={
            {1,2,3},
            {4,5,6},
            {7,8,9}
        };
        List<Integer>spiralOrder=getSpiralMatrix(matrix);
        System.out.println("Spiral Order: " + spiralOrder);
    }
}