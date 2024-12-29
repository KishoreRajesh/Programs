package DSA;

public class linear_search {
    public static void main(String[] args) {
        int  nums[]={1,2,3,4,5,6,7,8};

        int result = linearsearch(nums,5);
                if(result == -1){
                    System.out.println("Number Not found");
                }else{
                    System.out.println("Number found at index "+result);
                }
            }
        
        static int linearsearch(int[] nums,int tar){
            for(int i = 0;i<nums.length;i++){
                if(nums[i]==tar){
                 return i;
                }
            }
            return -1;
        }
}
