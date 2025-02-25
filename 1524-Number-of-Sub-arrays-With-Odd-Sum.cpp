class Solution {
public:
    int numOfSubarrays(vector<int>& arr) {
        int sum=0;
        int ans=0;
         int p=1;
         int o=0;
        for(auto it:arr){
          sum+=it;
          if(sum%2){
            o++;
            ans+=p;
          }else{
            p++;
            ans+=o;
          }
         ans=ans%1000000007;
        }

        return ans;
    }
};