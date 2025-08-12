class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int max_ones = 0,i = 0;
        while(i<nums.size()){
            long temp = 0;
            while(i < nums.size() && nums[i] == 1){
                temp++;i++;
            }
            if(max_ones<temp){
                max_ones = temp;
            }
            i++;
        }
        return max_ones;
    }
};