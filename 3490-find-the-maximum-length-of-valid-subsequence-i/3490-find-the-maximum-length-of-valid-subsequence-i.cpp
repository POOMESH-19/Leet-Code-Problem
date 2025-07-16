class Solution {
public:
    int maximumLength(vector<int>& nums) {
        int even=0;
        int odd=0;
        int a=1;
        int p=nums[0]%2;
        for(auto&x:nums){
            if(x&1){
              odd++;
              if(p==0){
                a++;
              }
            }else{
                even++;
                if(p==1){
                    a++;
                }
            }
            p=x%2;
        }
        return max(a,max(even,odd));
    }
};