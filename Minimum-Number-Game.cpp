class Solution {
public:
    vector<int> numberGame(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        for(int i=0;i<n-1;i+=2){
            swap(nums[i],nums[i+1]);
        }
        return nums;
        
    }
};