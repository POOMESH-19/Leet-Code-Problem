class Solution {
public:
    int coinChange(vector<int>& coins, int sum) {
        int n=coins.size();
        vector<int>curr(sum+1,INT_MAX-1);
        curr[0]=0;
        for(int i=0;i<n;i++){
            for(int j=coins[i];j<=sum;j++){
                curr[j]=min(curr[j],1+curr[j-coins[i]]);
            }
        }
        if(curr[sum]>=1e9){return -1;}
        return curr[sum];
    }
};