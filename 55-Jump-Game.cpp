class Solution {
public:
    bool canJump(vector<int>& nums) {
        int go=nums.size()-1;
        for (int i=nums.size()-1;i>=0;i--){
            if(i+nums[i]>=go){
                go=i;
            }
        }
        return go==0;
    }
};