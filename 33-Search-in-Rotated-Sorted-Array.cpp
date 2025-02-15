class Solution {
public:
    int search(vector<int>& nums, int target) {
        int i;
        int index=0;
        if(nums[0]==target) return 0;
        for(i=0;i<nums.size();++i){
            if(nums[i]==target){
                index=i;
            }
            else continue;
        }
        if (index==0) index= -1;
        return index;
    }
};