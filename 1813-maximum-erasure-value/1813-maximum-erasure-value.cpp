class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        int i=0,j=0,maximum=0,sum=0;
        unordered_map<int,int>mp;
        while(j<nums.size())
        {
          mp[nums[j]]++;
          while(mp[nums[j]]>1)
          {
             sum-=nums[i];
             mp[nums[i]]--;
             i++;
          }
          sum+=nums[j];
          maximum=max(maximum,sum);
          j++;
        }
        return maximum;
    }
};