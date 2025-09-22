class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int n = nums.size();
        int ans = 1;
        int max_el = *max_element(nums.begin(),nums.end());
        int i = 0 , j = 0;
        while( j < n ){
            if( nums[j] != max_el ){
                j++; i++;
                continue;
            }
            while( j < n && nums[j] == max_el ){
                j++;
            }
            ans = max(ans,j-i);
            i = j;
        }
        return ans;
    }
};