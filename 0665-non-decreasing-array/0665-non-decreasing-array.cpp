class Solution {
public:
    bool checkPossibility(vector<int>& nums) {
        bool flag = false;
        for (int i = 1, n = nums.size(); i < n; ++i) {
            if (nums[i - 1] > nums[i]) {
                if (flag) return false;
                if (i < 2 || nums[i - 2] <= nums[i]) nums[i - 1] = nums[i];
                else nums[i] = nums[i - 1];
                flag = true;
            }
        }
        return true;
    }
};