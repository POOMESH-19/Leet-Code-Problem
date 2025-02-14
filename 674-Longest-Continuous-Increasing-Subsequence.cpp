class Solution {
public:
    int findLengthOfLCIS(vector<int>& nums) {
        int n = nums.size();
        vector<int> dp (  n , 1);
        if (n==1) return 1;
        int m=0;
        for (int i=1;i< n;i++){
            if (nums[i]>nums[i-1]){
                dp[i]=dp[i-1]+1;
            }
            m=max(m,dp[i]);
        }
        return m;
    }
};