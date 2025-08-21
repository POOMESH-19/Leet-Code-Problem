class Solution {
public:
    std::vector<int> numberOfPairs(std::vector<int>& nums) {
        int count = 0;
        int n = nums.size();
        std::sort(nums.begin(), nums.end());
        for (int i = 0; i < n - 1; i++) {
            if (nums[i] == nums[i + 1]) {
                count++;
                i++;
            }
        }
        int leftover = n - (count * 2);
        return {count, leftover};
    }
};