class Solution {
public:
    vector<int> resultsArray(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int> ans(n - k + 1, -1);
        int p = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (i && nums[i - 1] + 1 == nums[i])
                p++;
            else
                p = 0;
            if (p >= k - 1)
                ans[i - k + 1] = nums[i];
        }
        return ans;
    }
};