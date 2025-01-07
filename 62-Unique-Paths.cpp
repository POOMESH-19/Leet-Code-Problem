class Solution {
public:
    int uniquePaths(int m, int n) {
        vector<int> dp(n,1);
        for(int i=1;i<m;i++){
            for(int ii=1;ii<n;ii++){
                dp[ii]+=dp[ii-1];
            }
        }
        return dp[n-1];
    }
};