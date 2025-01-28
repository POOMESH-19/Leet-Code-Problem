class Solution {
public:
    int rob(vector<int>& nums) {
        int n=nums.size();
        if(n==1)  return nums[0];
        return max(robr(nums,0,n-2),robr(nums,1,n-1));
    }
    int robr(vector<int>& nums,int l,int r){
        int in=0;
        int ex=0;
        for(int i=l;i<=r;i++){
            int newex=max(in,ex);
            in=ex+nums[i];
            ex=newex;
        }
        return max(in,ex);
    }
};