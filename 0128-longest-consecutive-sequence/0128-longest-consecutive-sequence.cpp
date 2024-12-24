class Solution {
public:
    int longestConsecutive(std::vector<int>& nums) {
        if (nums.empty())
        return 0;
        sort(nums.begin(), nums.end());
        int Length = 1;
        int cLength = 1;
        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] == nums[i - 1]) {
                continue;
            }
            if (nums[i] == nums[i - 1] + 1) {
                cLength++; 
            } else {
                Length =max(Length, cLength);
                cLength = 1;
            }
        }
        Length =max(Length, cLength);
        return Length;
    }
};
