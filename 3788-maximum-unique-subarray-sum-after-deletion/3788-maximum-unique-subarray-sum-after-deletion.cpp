class Solution {
public:
    int maxSum(vector<int>& nums) {
        unordered_map<int,int>mp;
        for(int num:nums) mp[num]++;
        int sum=0;
        for(auto ele:mp){
            sum = max(sum,sum+ele.first);
        }
        if(sum == 0){
            return *max_element(nums.begin(),nums.end());
        }
        return sum;
    }
};