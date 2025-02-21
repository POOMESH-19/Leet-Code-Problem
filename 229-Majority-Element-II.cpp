class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int c1 = 0, c2 = 0, p = 0, v = 0;
        for (auto num : nums) {
            if (c1 == num) p++;
            else if (c2 == num) v++;
            else if (p == 0) c1 = num, p = 1;
            else if (v == 0) c2 = num, v = 1;
            else p--, v--;
        }
        p = v = 0;
        for (int num : nums) {
            if (num == c1) p++;
            else if (num == c2) v++;
        }
        
        vector<int> ans;
        if (p > nums.size() / 3) ans.push_back(c1);
        if (v > nums.size() / 3) ans.push_back(c2);
        
        return ans;
    }
};