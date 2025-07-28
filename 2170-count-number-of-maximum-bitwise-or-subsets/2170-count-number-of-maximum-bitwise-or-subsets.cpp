class Solution {
public:
    void solve(int i, int &ans, int &maxi,vector<int> &nums,int curr){
        if(i==nums.size()){
            if(curr == maxi)ans++;
            if(curr>maxi){
                maxi = curr;
                ans =1;
            }
            return;
        }
        solve(i+1,ans,maxi,nums,curr|nums[i]);
        solve(i+1,ans,maxi,nums,curr);
    }
    int countMaxOrSubsets(vector<int>& nums) {
        int ans =0,i=0,maxi=0;
        int curr=0;
        solve(i,ans,maxi,nums,curr);

        return ans;
    }
};