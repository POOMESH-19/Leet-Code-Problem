class Solution {
public:
    std::vector<int> transformArray(std::vector<int>& nums) {
        for (int& num : nums) {
            num = (num % 2 == 0) ? 0 : 1;
        }
        std::sort(nums.begin(), nums.end());
        return nums;
    }
};
