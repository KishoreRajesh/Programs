package Data_structures;

public class linear_search {
    public static void main(String[] args) {
        int nums[] = {1,3,5,7,9};

        int result =  linear_s(nums,5);

        if(result != -1){
            System.out.println("Element found in index "+result);
        }else{
            System.out.println("Element is not found");
        }
            
    }
        
    private static int linear_s(int[] nums, int tar) {
        
        for(int i = 0;i<nums.length;i++){
            if(nums[i]==tar){
                return i;
            }
        }
        return -1;
    }
}
