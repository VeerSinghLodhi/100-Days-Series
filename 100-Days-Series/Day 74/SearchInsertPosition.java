
class SearchInsertPosition{
    // Method to Search Insert Position
    public static int getSearchInsertPosition(int nums[],int target){
        int low=0;
        int high=nums.length-1;
        if(target>nums[high]){
            return high+1;
        }
        while(low<=high){
            int mid=(low+high)/2;
            if(target==nums[mid])
                return mid;
            else if(target<nums[mid]){
                high=mid-1;
            }else{
                low=mid+1;
            }
        }
        return low;
    }
    // Main Method 
    public static void main(String [] args){
        // Let's Start Here
        int arr[]={1,3,5,6};
        int target=7;
        int pos=getSearchInsertPosition(arr, target);
        System.out.println("Position is "+pos);

    }
}