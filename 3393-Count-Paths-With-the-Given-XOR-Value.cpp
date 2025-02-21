class Solution {
public:
#define ll long long
ll mod=1e9+7;
    int countPathsWithXorValue(vector<vector<int>>& a, int k) {
        ll dp[304][304][17];
        memset(dp,0,sizeof(dp));
      dp[1][0][0]=1;
        int n=a.size(),m=a[0].size();
        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
                for(int s=0;s<16;s++){
                    dp[i][j][s^a[i-1][j-1]]+=((dp[i-1][j][s]+dp[i][j-1][s])%mod);
                    dp[i][j][s^a[i-1][j-1]]%=mod;
                }
            }
        }
        return dp[n][m][k];
        
    }
};