public class SumOfRow {
    public static void main(String[] args) {
        int[][] nums = {
            {1, 4, 9},
            {11, 4, 3},
            {2, 2, 3}
        };
        int targetRow = 1; // Index of the row to sum (second row)
        int sum = 0;

        for (int num : nums[targetRow]) {
            sum += num;
        }

        System.out.println("The sum of the numbers in row " + (targetRow + 1) + " is: " + sum);
    }
}
