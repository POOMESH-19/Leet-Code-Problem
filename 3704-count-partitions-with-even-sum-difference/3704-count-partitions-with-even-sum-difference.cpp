class Solution {
public:
    int countPartitions(vector<int>& nums) {
        int t=0;
        int count=0;
        int s=0;
        for(int i=0;i<nums.size();i++){
            t=t+nums[i];
        }
        for(int i=0;i<nums.size()-1;i++){
            s=nums[i]+s;
            if((s-(t-s))%2==0) count++;
        }
        return count;
    }
};