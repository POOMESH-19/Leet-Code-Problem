class Solution {
    public int[] rotate(int[] nums, int k) {
        int []arr=new int[nums.length];
        for(int i=0;i<nums.length;i++){
            int s=(i+k)%nums.length;
            arr[s]=nums[i];
            

        }
        System.arraycopy(arr,0,nums,0,nums.length);
        return nums;
    }
}