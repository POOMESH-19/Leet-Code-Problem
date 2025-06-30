class Solution {
public:
    int findLHS(vector<int>& nums) {
        unordered_map<int, int> mp;

        for (auto& num : nums) {
            mp[num]++;
        }
        int res = 0;
        for (int i = 0; i < nums.size(); i++) {
            int maxEle = nums[i] + 1;
            if (mp.find(maxEle) != mp.end()) {
                int totalCnt = mp[nums[i]] + mp[maxEle];
                res = max(res, totalCnt);
            }
        }
        return res;
    }
};